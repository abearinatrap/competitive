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
    cin.ignore();
    string word;
    int p,sum=0;
    cin >> word>> p;
    vector<int> dict(26);
    map<int,int> skips;
    for(auto c: word){
        dict[c-'a']++;
        sum+=c-'a'+1;
    }
    for(int i=25;i>=0&&sum-p>0;--i){
        if(dict[i]==0) continue;
        int removen=(sum-p)/(i+1);
        if((sum-p)%(i+1)!=0) removen++;
        if(removen>=dict[i]){
            word.erase(remove(word.begin(),word.end(),(char)(i+'a')),word.end());
            sum-=dict[i]*(i+1);
            dict[i]=0;
        }else{
            sum-=removen*(i+1);
            skips[i]=removen;
        }
    }
    for(auto c:word){
        if(--skips[c-'a']<0) cout<< c;
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
