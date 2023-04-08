#include <iostream>
#include <vector>
#include <map>
#include <stack>
#include <queue>
#include <set>
#include <algorithm>
#include <cassert>
#include <sstream>

using namespace std;


void solve(){
    int n;
    cin >> n;
    vector<vector<int> > dep(n);
    map<string,int> dict;
    map<int,string> rdict;
    set<string> output;
    vector<string> routput;
    set<int> old;
    for(int i=0;i<n;++i){
        vector<int> temp;
        dep[i]=temp;
    }
    //cin.ignore(INT_MAX,'\n');
    cin.clear();

    for(int i=0;i<n;++i){
        //cout << i << endl;
        string line;
        getline(cin >> ws, line);
        istringstream ss(line);
        string word;
        ss>>word;
        word.erase(word.size()-1,1);
        dict[word]=i;
        rdict[i]=word;
        dep[i].push_back(i);

        while(ss>>word){
            dep[dict[word]].push_back(i);
        }
    }
    string depo;
    cin >> depo;

    queue<int> f;
    f.push(dict[depo]);
    while(!f.empty()){
        int i=f.front();
        vector<int> todo=dep[i];
        for(auto d :todo){
            if(output.find(rdict[d])!=output.end()){
                output.insert(rdict[d]);
                routput.push_back(rdict[d]);
            }
            if(old.find(d)!=old.end()){
                f.push(d);
            }
        }
        f.pop();
    }

    for(auto s:routput){
        cout << s << endl;
    }
}

int main(){
    solve();
    return 0;
}
