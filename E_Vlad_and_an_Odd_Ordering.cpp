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
    in(n); in(k);
    ll cur = 0;
    ll i=1;
    while(k>cur){
        ll d = 1<<i;
        ll t = (n-(1<<(i-1)))/(d)+1;
        //cout << i << " " << t << " " << cur << " " << n-(1<<(i-1)) << endl;
        if (cur+t>=k){
            break;
        }
        ++i;
        cur+=t;
    }
    //cout << "d: " << k << " " << cur << " " << i << endl;
    int a = k-cur-1;
    if(i==1){
        cout << 2*(k-1)+1 << endl;
    }else{
        //cout << (1<<(i-1) ) + a * (1<<(i)) <<" old:" << (1<<(i-1) ) << " " << a * (1<<i)  <<  endl;
        cout << (1<<(i-1) ) + a * (1<<(i))<< endl;
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