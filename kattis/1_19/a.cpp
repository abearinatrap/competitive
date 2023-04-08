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
    int num;
    cin >> num;
    string word;
    vector<string> notes;
    for(int i=0;i<num;++i){
        cin >> word;
        notes.push_back(word);
    }
    vector<vector<char> > output(14);
    for(int i=0;i<14;++i){
        vector<char> temp;
        output[i]=temp;
    }
    vector<char> dict = {'-',' ',' ',' ','-',' ','-',' ','-',' ','-',' ','-',' '};
    vector<char> lett = {'a','b','c','d','e','f','g','A','B','C','D','E','F','G'};
                        
    int time=0;
    for(auto note:notes){
        char d=note[0];
        if(d-'A'>10){
            d-='a';
        }else{
            d-='A'-7;
        }
        //cout <<"d: "<< (int)d << " ";
        output[d].push_back('*');
        for(int i=0;i<14;++i){
            if(i==d) continue;
            output[i].push_back(dict[i]);
        }
        if(note.size()>1){
            note.erase(0,1);
            int val = stoi(note);
            for(int i=1;i<val;++i){
                output[d].push_back('*');
                for(int i=0;i<14;++i){
                    if(i==d) continue;
                    output[i].push_back(dict[i]);
                }
            }
        }

        for(int i=0;i<14;++i){
            output[i].push_back(dict[i]);
        }
            
    }

    for(int i=13;i>=0;--i){
        cout << lett[i] << ": ";
        int sss=output[0].size()-1;
        for(int j=0;j<sss;++j){
            cout << output[i][j];
        }
        cout << endl;
    }

    
}

int main(){
    solve();
    return 0;
}
