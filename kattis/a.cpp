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

void solve(){
    int n,m;
    cin >> n;
    vi tp(n);
    fo(i,n){
        cin >> tp[i];
    }
    cin >> m;
    vi tt(m);
    fo(i,m){
        cin >> tt[i];
    }
    int minc = INT_MAX;
    fo(i,n){
        int a;
        C(a);
        fo(j,a){
            int t;
            C(t);
            --t;
            minc=min(minc,tp[i]+tt[t]);
        }
    }
    int p; C(p);
    p = p/minc - 1;

    cout << (p>0?p:0)<< endl;
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    solve();
    return 0;
}
