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
    int totaltime=0;
    int totalright=0;
    map<int,int> dict;
    while(true){
        string line;
        getline(cin,line);
        stringstream ss(line);
        vector<string> w;
        string s;
        while (getline(ss, s, ' ')) {
            // store token string in the vector
            w.push_back(s);
        }

        int mnum = stoi(w[0]);
        if(mnum==-1){
            break;
        }
        int pchar = w[1][0]-'A';
        
        if(dict.find(pchar)==dict.end()){
            if(w[2]=="right"){
                totaltime+=mnum;
                ++totalright;
            }else{
                dict[pchar]=20;
            }
        }else{
            int pen=dict[pchar];
            if(pen<0){
                continue;
            }
            if(w[2]=="right"){
                totaltime+=pen+mnum;
                ++totalright;
            }else{
                dict[pchar]+=20;
            }
        }
        //
    }
    cout << totalright << " "<< totaltime<< endl;

}

int main(){
    solve();
    return 0;
}
