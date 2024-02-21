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

const int maxn = 5001, maxm = 21;
vector<vector<pii>> range(maxn, vector<pii>(maxm));
vvi dp(maxn, vi(maxm));

int weight(int n, int m){
    if (dp[n][m]) return dp[n][m];
    if (n==0) return 0;
    if (m==1){
        range[n][m].fi = range[n][m].se = 1;
        return n;
    }
    int ret = n;
    
}

void solve(){
    in(n); in(m);
    
    cout << weight(n,m) << endl;
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    solve();
    return 0;
}