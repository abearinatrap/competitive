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

void dfs(vi &seen, string &data, vvi &parents, int a, pair<int,int> &sum){
    if(data[a]=='P'){
        sum.fi++;
        return;
    }else if (data[a]=='S'){
        sum.se++;
        return;
    }
    if(seen[a]==1) return;
    seen[a] = 1;
    for(int i=0;i<parents[a].size();++i){
        dfs(seen, data, parents, parents[a][i], sum);
    }

}

void look(vi &seen, string &data, vvi &parents, int a, pair<int,int> &sum){
    if(data[a]=='P'){
        for(auto c :parents[a]){
            if (data[c]=='S'){
                sum.se++;
            }
        }
    } else if (data[a]=='S'){
        for(auto c :parents[a]){
            if (data[c]=='P'){
                sum.fi++;
            }
        }
    }else{
        dfs(seen, data, parents, a, sum);
    }
}

void solve(){
    in(n);
    vi edges(n-1);
    vvi children(n,vi(n));
    vi parents(n);
    fo(i,n-1){
        int t;
        cin >> t;
        --t;
        children[t].pb(i+1);
        parents[i+1]=t;
        cout << t << " " << i+1 << endl;
    }
    string p;
    cin >> p;
    vi seen(n);
    ll total =0;

    fo(i,n-1){
    
        pii sum = make_pair(0,0);
        dfs(seen,p,children, i, sum);
        // need to fix dfs and also what happens when we see a S or P
        if(p[i]=='C'){
            total += min(sum.fi,sum.se);
        }
    }


    cout << total << endl;
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