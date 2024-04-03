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
    int a,z,k;
    cin >> a >> z >> k;
    int na=0,nb=0;
    vi b(a),c(z);
    fo(i, a){
        cin >> b[i];
    }
    fo(i,z){
        cin >> c[i];
    }
    sort(all(b));
    sort(all(c));

    int prev=z-1;
    ll total=0;
    fo(i,a){
        while(b[i]+c[prev]>k) {
            prev--;
            if(prev<0) break;
        }
        if(prev<0) break;
        total += prev+1;
        //cout << prev << " " << total << endl;
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