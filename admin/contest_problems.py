import requests
from bs4 import BeautifulSoup
from urllib.parse import urlparse, urljoin

def get_kattis_contest_info(contest_link):
    # Parse the contest ID from the provided link
    parsed_url = urlparse(contest_link)
    contest_id = parsed_url.path.split('/')[-1]

    base_url = f'https://open.kattis.com/contests/{contest_id}/problems'
    response = requests.get(base_url)
    print(base_url)

    if response.status_code == 200:
        soup = BeautifulSoup(response.text, 'html.parser')

        # Extract problem names and links
        problems = []
        for problem_row in soup.find('table', class_='table2').find_all('a'):
            problem_name = problem_row.text.strip()
            problem_link = urljoin(base_url, problem_row['href'])
            problem_id = problem_row['href'].split('/')[-1]
            problems.append({'name': problem_name, 'id': problem_id,'link': problem_link, 'difficulty': 1})

        for problem in problems:
            PROBLEM_METADATA = '?tab=metadata'
            p_response = requests.get(f'https://open.kattis.com/problems/{problem["id"]}{PROBLEM_METADATA}')
            if p_response.status_code == 200:
                p_soup = BeautifulSoup(p_response.text, 'html.parser')
                difficulty_card = p_soup.find('div', class_ = 'metadata-difficulty-card').find('span', class_ = 'difficulty_number-problem_view')
                problem['difficulty'] = difficulty_card.text

            # class: metadata-difficulty-card
            # number is in the first span with class: difficulty_number-problem_view


        return problems
    else:
        print(f"Failed to retrieve data. Status code: {response.status_code}")
        return None

# Example usage
contest_link =  input("contest link: ")
while contest_link != 'exit':
    #contest_link = "https://open.kattis.com/contests/dxuf3m"
    problems = get_kattis_contest_info(contest_link)

    if problems:
        for problem in problems:
            print(f"{problem['id']}: {problem['difficulty']}")
            
    contest_link =  input("contest link: ")
