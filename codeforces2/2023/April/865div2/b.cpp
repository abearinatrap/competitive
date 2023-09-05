#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef pair<int,int> pii;
typedef vector<int> vi;
typedef vector<ll> vl;
typedef vector<vi> vvi;
typedef vector<vl> vvl;
typedef priority_queue<int> pqi;

#define fi first
#define se second
#define pb push_back
#define all(a) a.begin(),a.end()
#define sz(a) ((int)a.size())
#define fo(i, n) for (int i = 0; i < n; ++i)
#define of(i, n) for (int i = n; i >= 0; --i)
#define rep(i, a, b) for (int i = a; i < b; ++i)
#define C(i) cin >> i

#define CLRS() cin.ignore(INT_MAX,'\n')

void solve(){
    int n; C(n);
    vvi ans(2,vi(n));
    // want bigger numbers to have even distance from origin
    // so 1 in first bit of index
    ans[0][0]=2*n;
    ans[1][n-1]=2*n-1;
    int lower=0;
    int higher=2*n-1;
    fo(i,n-1){
        if(i&1){
            // if even distance higher
            ans[0][i+1]=--higher;
            ans[1][i]=--higher;
        }else{
            ans[1][i]=++lower;
            ans[0][i+1]=++lower;
        }
    }
    fo(i,n){
        cout << ans[0][i] << ((i==n-1)?'\n':' ');
    }
    fo(i,n){
        cout << ans[1][i] << ((i==n-1)?'\n':' ');
    }
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int repeat;
    cin >> repeat;
    while(repeat--){
        solve();
    }
    return 0;
}
