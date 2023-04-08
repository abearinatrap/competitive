#include <iostream>
#include <vector>
#include <map>
#include <stack>
#include <queue>
#include <set>
#include <algorithm>
#include <cassert>
using namespace std;

int in(){
    int r;
    cin >> r;
    return r;
}



void solve(){
    int n=in();
    long long cost=0;
    map<int,bool> ex;
    for(int i=1;i<n+1;++i){
        char c;
        cin >> c;
        if(c=='0'){
            ex[i]=false;
        }
    }
    map<int, bool>::iterator it;
    for(it= ex.begin(); it!=ex.end();++it){
        if(it->second==false){
            cost+=it->first;
            for(int i=2;i<=n;++i){
                if(ex.find(it->first*i)!=ex.end() && ex[it->first*i]==false){
                    cost+=it->first;
                    ex[it->first*i]=true;
                }else{
                    break;
                }
            }
        }else{
            for(int i=2;i<=n;++i){
                if(ex.find(it->first*i)!=ex.end() && ex[it->first*i]==false){
                    cost+=it->first;
                    ex[it->first*i]=true;
                }else{
                    break;
                }
            }
        }
    }
    cout << cost << endl;
}

int main(){
    int repeat;
    cin >> repeat;
    while(repeat--){
        solve();
    }
    return 0;
}
