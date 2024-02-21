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
    in(n);
    vi items(n);
    fo(i,n){
        cin >> items[i];
    }
    const int INF = 1000000000;
    vector<vector<pair<int, int>>> adj(n);
    in(m);
    fo(i,m){
        int a,b,d;
        cin >> a >> b >> d;
        --a;--b;
        adj[a].pb({b,d});
        adj[b].pb({a,d});
    }

    int s = 0;

    vector<pair<int,int>> d(n, {INF,0});
    vi p(n, -1);
    d[s] = {0,items[0]};
    using pii = pair<int, int>;
    priority_queue<pii, vector<pii>, greater<pii>> q;
    q.push({0, s});

    while (!q.empty()) {
        int v = q.top().second;
        int d_v = q.top().first;
        q.pop();
        if (d_v != d[v].fi)
            continue;

        for (auto edge : adj[v]) {
            int to = edge.first;
            int len = edge.second;
            if (d[v].fi + len <= d[to].fi && d[v].se + items[to] > d[to].se) {
                d[to] = {d[v].fi + len, d[v].se + items[to]};
                p[to] = v;
                q.push({d[to].fi, to});
            }
            else if (d[v].fi + len < d[to].fi) {
                d[to] = {d[v].fi + len, d[v].se + items[to]};
                p[to] = v;
                q.push({d[to].fi, to});
            }
        }
    }

    if (d[n-1].fi == INF){
        cout << "impossible" << endl;
    }else{
        cout << d[n-1].fi << " " << d[n-1].se << endl;
    }
    
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    solve();
    return 0;
}
