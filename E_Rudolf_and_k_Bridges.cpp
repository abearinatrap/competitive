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
    int n,m,k,d;
    cin >> n >> m >> k >>d;
    d++;
    vi rc(n);
    fo(i,n){
        vi r(m);
        fo(j,m){
            cin >> r[j];
            //cout << r[j] << " ";
        }
        vi dp(m);
        for(int j=1;j<m;++j){
            if(j<d){
                dp[j]=dp[0]+r[j]+1;
                continue;
            }
            dp[j]=dp[j-1]+r[j]+1;
            
            for(int k=2;k<=d;++k){
                if(j-k<0) break;
                dp[j] = min(dp[j-k]+r[j]+1, dp[j]);
            }
        }
        rc[i]=dp[m-1]+1;
        //cout << rc[i] << " ";
    }

    int tc=0;
    for(int i=0;i<k;++i){
        tc+=rc[i];
    }
    int mc=tc;
    for(int i=k;i<n;++i){
        tc-=rc[i-k];
        tc+=rc[i];
        //cout << mc << " " << tc << endl;
        mc=min(mc,tc);
    }
    cout << mc << endl;
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