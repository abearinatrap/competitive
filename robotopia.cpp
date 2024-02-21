#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef pair<int,int> pii;
typedef vector<int> vi;
typedef vector<ll> vl;
typedef vector<vi> vvi;
typedef vector<vl> vvl;
typedef priority_queue<int> pqi;
typedef string str;

#define fi first
#define se second
#define pb push_back
#define all(a) a.begin(),a.end()
#define sz(a) ((int)a.size())
#define fo(i, n) for (int i = 0; i < n; ++i)
#define of(i, n) for (int i = n; i >= 0; --i)
#define rep(i, a, b) for (int i = a; i < b; ++i)
#define in(i) int i; cin >> i
#define S(i) str i; cin >> i
#define L(i) str i; getline(cin, i)

#define CLRS() cin.ignore(INT_MAX,'\n')


void solve(){
    ll e,f,g,h,m,n;
    cin >> e >>f >> g >> h >> m >> n;
    ll ans, ans2;
    int good = 0;
    ll x = 1;
    
    for(ll i=1;(e*i<m);++i){
        int te = e*i;
        int ty = (m-te)/g;
        if (te + ty*g == m && f*i + h*ty == n){
            good++;
            ans = i; ans2 = ty;
        }
    }

    if (good != 1) {
        cout << "?" << endl;
    }else{
        cout << ans << " " << ans2 << endl;
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