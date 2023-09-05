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
#define C(i) cin >> i

#define CLRS() cin.ignore(INT_MAX,'\n')

void solve(){
    int n1,n2;
    cin >> n1;
    n1++;
    vi n(n1);
    fo(i,n1){
        cin >> n[i];
    }
    cin >> n2;
    n2++; 
    vi b(n2);
    fo(i,n2){
        cin >> b[i];
    }
    vi out(n2+n1-1);

    fo(i,n2){
        fo(j,n1){
            out[i+j]+=b[i]*n[j];
        }
    }

    cout << out.size()-1 << "\n";
    for(auto c: out){
        cout << c << " ";
    }cout << endl;

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
