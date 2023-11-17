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

#define CLRS() cin.ignore(INT_MAX,'\n')

void solve(){
    in(n);in(k);ll x; cin >> x;
    ll up = (ll)n * (n+1) / 2;
    int a = n-k;
    ll down = (ll)a * (a+1) /2;
    ll sumk;
    if(up-down<x){
        goto bad;
    }
    
    sumk = (ll)k * (k+1) / 2;
    if(sumk>x){
        goto bad;
    }

    cout << "YES" << endl;
    return;
bad:
    cout << "NO" << endl;
    return;
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
