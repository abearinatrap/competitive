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
    int n;
    cin >> n;
    vi t(n);
    int f1=-1;
    int l1=-1;
    int nz=0;
    fo(i,n){
        cin >> t[i];
        if(t[i] && f1==-1){
            f1=i;
            l1=i;
        }else if(t[i]){
            l1=i;
        }
    }
    for(int i=f1;i<l1;++i){
        if(!t[i]){
            nz++;
        }
    }
    cout << nz << endl;
    //cout << f1 << " " << l1 << " " << nz <<endl;
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