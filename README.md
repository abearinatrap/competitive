#### my code for competititve programming, mostly codeforces and kattis

RUN TO USE bits/stdc++.h
alias g=g++-12
alias p12="source venv/bin/activate"

## Grab problems from kattis contest link
python3 -m venv venv
p12
python3 -m pip install -r requirements.txt
python3 [contest_problems.py](admin/)

## Turn code into a snippet for vscode
python3 [cpp_to_snippet.py](codeforces2/cpp_to_snippet.py) > snippet.txt