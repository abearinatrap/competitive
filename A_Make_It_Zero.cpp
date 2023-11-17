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

#define CLRS() cin.ignore(INT_MAX,'\n')

void solve(){
    in(n);
    vi a(n);
    fo(i,n){
        cin >> a[i];
    }
    int t=0;
    fo(i,n){
        t^=a[i];
    }
    if(t==0){
        cout << 1 << endl;
        cout << 1 << " " << n << endl;
        return;
    }
    if(n&1){
        cout << 4 << endl;
        cout << 1 << " " << n-1 << endl;
        cout << 1 << " " << n-1 << endl;
        cout << n-1<< " " << n << endl;
        cout << n-1<< " " << n << endl;
        return;
    }
    cout << 2 << endl;
    cout << 1 << " " << n << endl;
    cout << 1 << " " << n << endl;
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
