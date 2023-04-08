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
    int n;
    cin >> n;
    map<int,bool> m;
    int count=0;
    if(n==1) { cout << "N" <<endl;return;}
    for(int i=0;i<n;++i){
        int t;
        cin >> t;
        ++count;
        if(m.find(t)!=m.end() && m[t]==false){
            m[t]=true;
            --count;
            while(m.find(++t)!=m.end() && m[t]==false){
                m[t]=true;
                --count;
            }
            m[t]=false;
        }else{
            m[t]=false;
        }
    }
    if(count<=2){
        cout << "Y" << endl;
    }else{
        cout << "N" << endl;
    }
}

int main(){
    solve();
    return 0;
}
