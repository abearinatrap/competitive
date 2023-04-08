#include <iostream>
#include <vector>
#include <map>
#include <stack>
#include <queue>
#include <set>
#include <algorithm>
#include <cassert>
using namespace std;



void solve(){
    int w;
    cin >> w;
    map<string,vector<int> > dict;
    for(int i=0;i<3;++i){
        for(int j=0;j<w;++j){
            string word;
            cin >> word;
            dict[word].push_back(i);
        }
    }
    vector<int> score(3);
    for(auto c=dict.begin();c!=dict.end();c++){
        if(c->second.size()==1){
            score[c->second[0]]+=3;
        }else if(c->second.size()==2){
            score[c->second[0]]++;
            score[c->second[1]]++;
        }
    }
    for(int i=0;i<3;++i){
        cout << score[i] << " ";
    }cout <<endl;
}

int main(){
    int repeat;
    cin >> repeat;
    while(repeat--){
        solve();
    }
    return 0;
}
