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
    vector<pii> sa(n), sw(n);
    fo(i,n){
        cin >> sa[i].first;
        sa[i].second=i;
    }

    fo(i,n){
        cin >> sw[i].first;
        sw[i].second=i;
    }

    int a,b;
    cin >> a >> b;

    vector<pii> swc(sw), sac(sa);
    sort(all(sac));
    sort(all(swc));
    
    
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    solve();
    return 0;
}
