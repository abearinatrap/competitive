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
    int n,k,q;
    cin >> n >> k >> q;
    vector<int> v(n);
    for(int i=0;i<n;++i){
        cin >> v[i];
    }

    
    int c;
    for(int i=0;i<q;++i){
        map<int, bool> b;
        c=0;
        int l,r;
        cin >> l >> r;
        --l;
        for(int j=l;j<r;++j){
            //cout << v[j] << " ";
            if(b.find(v[j])==b.end()){
                c++;
                b[v[j]]=false;
            }else{
                c--;
                b.erase(v[j]);
            }
        }
        //cout <<c <<  endl;
        if(c==1||c==-1){
            map<int,bool>::iterator it=b.begin();
            cout << it->first << endl;
        }else{
            cout << 0 << endl;
        }
    }
    
} 

int main(){
    solve();
    return 0;
}
