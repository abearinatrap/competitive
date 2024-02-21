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
#define INF 1e10

int nh;
vector<vector<int>> capacity;
vector<vector<int>> adj;

int bfs(int s, int t, vector<int>& parent) {
    fill(parent.begin(), parent.end(), -1);
    parent[s] = -2;
    queue<pair<int, int>> q;
    q.push({s, INF});

    while (!q.empty()) {
        int cur = q.front().first;
        int flow = q.front().second;
        q.pop();

        for (int next : adj[cur]) {
            if (parent[next] == -1 && capacity[cur][next]) {
                parent[next] = cur;
                int new_flow = min(flow, capacity[cur][next]);
                if (next == t)
                    return new_flow;
                q.push({next, new_flow});
            }
        }
    }

    return 0;
}

int maxflow(int s, int t) {
    int flow = 0;
    vector<int> parent(nh);
    int new_flow;

    while (new_flow = bfs(s, t, parent)) {
        flow += new_flow;
        int cur = t;
        while (cur != s) {
            int prev = parent[cur];
            capacity[prev][cur] -= new_flow;
            capacity[cur][prev] += new_flow;
            cur = prev;
        }
    }

    return flow;
}

void solve(){
    int n,m,p;
    cin >> n >> m >> p;
    nh = n + m + p + 2;
    capacity.assign(nh,vi(nh));
    adj.assign(nh,vi());
    int sm = n-1; // minus 1 because toys start at 1

    // kids to toys
    fo(i,n){
        in(t);
        fo(j,t){
            in(b);
            capacity[i][sm+b] = 1;
            adj[i].pb(sm+b);
            adj[sm+b].pb(i);
        }
    }
    int sp = n + m;
    vi toys(m);
    //connect toys to catagories to end

    // I FUCKED UP AND FORGOT ABOUT THE 'r' when getting catagories
    fo(i,p){
        in(t);
        fo(j,t){
            in(b);
            capacity[sm+b][sp+i] = 1;
            adj[sm+b].pb(sp+i);
            adj[sm+i].pb(sp+b);
            toys[b-1]=1;
        }
        capacity[sp+i][nh-1] = 1;
        adj[sp+1].pb(nh-1);
        adj[nh-1].pb(sp+1);
    }
    //connect toys not in catagories to end
    sm++;
    fo(i,n){
        if(toys[i]==0){
            capacity[sm+i][nh-1] = 1;
            adj[sm+i].pb(nh-1);
            adj[nh-1].pb(sm+i);
        }
    }

    cout <<"sm: "<< sm << " sp:" << sp << endl;
    //adj[nh].resize(0);
    fo(i,nh){
        for(auto c:adj[i]){
            cout <<i << " " << c << " " << capacity[i][c] <<endl;
        }
    }

    cout << maxflow(0,n+m+p+1) << endl;
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    solve();
    return 0;
}