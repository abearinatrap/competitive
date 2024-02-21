import re


def find_index_of_first_digit(input_string):
    for index, char in enumerate(input_string):
        if char.isdigit():
            return index
    return None

def find_index_of_last_digit(input_string):
    for index, char in enumerate(reversed(input_string)):
        if char.isdigit():
            return len(input_string) - 1 - index
    return None


def find_indexes_of_substring(main_string, substring):
    indexes = []
    start_index = 0

    while start_index < len(main_string):
        index = main_string.find(substring, start_index)
        if index == -1:
            break  # No more occurrences found
        indexes.append(index)
        start_index = index + 1

    return indexes


with open("adin.txt") as f:
    lines = f.readlines()
    sum = 0
    wd = {
        'one': 1, 'two': 2, 'three': 3, 'four': 4,
        'five': 5, 'six': 6, 'seven': 7, 'eight': 8, 'nine': 9
    }

    
    

    for line in lines:
        print(line)
        a = find_index_of_first_digit(line)
        if a is not None:
            n = line[a]
        for i in wd:
            ind = find_indexes_of_substring(line, i)
            if len(ind)>0:
                if a is None or ind[0] < a:
                    a = ind[0]
                    n = str(wd[i])

        
        a = find_index_of_last_digit(line)
        if a is not None:
            n2 = line[a]
        for i in wd:
            ind = find_indexes_of_substring(line, i)
            if len(ind)>0:
                if a is None or ind[-1] > a:
                    a = ind[-1]
                    n2 = str(wd[i])
        print(n, n2)
        sum += int(n+n2)

print(sum)
