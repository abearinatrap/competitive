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
    ll out = d[0];
    ll cur = d[0];
    ll par = cur % 2; 
    if (par==-1) par = 1;


    int i=1;
    while(i<n){
        //cout << "p" << par;

        ll npar = d[i] % 2;
        if (npar==-1) npar = 1;
        if(cur<0){
            cur = d[i];
        }else{
            if(npar == par){
                cur = d[i];
            }else{
                cur += d[i];
            }
        }

        out = max(out, cur);
        par = npar;
        
        i++;
    }
    cout << out << endl;
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
