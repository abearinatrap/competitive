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
    in(n);in(q);
    vi nm(n); 
    vl s(n+1);
    vi ones(n+1);
    fo(i,n){
        cin >> nm[i];
        s[i+1]=s[i]+nm[i];
        ones[i+1]=ones[i] + (nm[i]==1?1:0);
    }
    fo(i,q){
        in(l);in(r);
        if(l==r){
            cout << "NO" << endl;
            continue;
        }
        
        if(s[r]-s[l]<ones[r]-ones[l]){
            cout << "NO" << endl;
            continue;
        }
        cout << "YES" << endl;
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