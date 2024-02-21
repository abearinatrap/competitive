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
    vl d(n);
    fo(i,n){
        cin >> d[i];
    }

    ll o=0;
    for(int k=1;k<=n/2;k++){
        int trucks = n/k;
        if(n%k==0){
            ll mi=LLONG_MAX,ma=0;
            fo(j,trucks){
                ll sum = 0;
                int start = j * k;
                fo(i,k){
                    sum += d[start+i];
                }
                ma = max(ma,sum);  
                mi = min(mi,sum);
                //cout << ma << " " << mi << endl;
            }
            o = max(o,ma-mi);
        }
    }
    cout << o << endl;
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
