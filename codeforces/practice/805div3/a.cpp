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
    int m;
    cin >> m;
    int ans=1;
    if(m==1) {
        ans=0;
    }else{
        while(ans<=m){
            ans*=10;
        }
        ans/=10;
        ans=m-ans;
    }
    cout << ans << endl;
}

int main(){
    int repeat;
    cin >> repeat;
    while(repeat--){
        solve();
    }
    return 0;
}
