#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef pair<int,int> pii;
typedef vector<int> vi;
typedef vector<ll> vl;
typedef vector<vi> vvi;
typedef vector<vl> vvl;
typedef priority_queue<int> pqi;

#define fi first
#define se second
#define pb push_back
#define all(a) a.begin(),a.end()
#define sz(a) ((int)a.size())
#define fo(i, n) for (int i = 0; i < n; ++i)
#define of(i, n) for (int i = n; i >= 0; --i)
#define rep(i, a, b) for (int i = a; i < b; ++i)
#define C(i) cin >> i

void solve(){
    int n;
    cin >> n;
    vi a(n);
    fo(i,n){
        cin >> a[i];
    }

    int b=a[0];
    for(int i=1;i<n;++i){
        b = b ^ a[i];
    }

    int c=0;
    fo(i,n){
        c = c ^ (b ^ a[i]);
    }

    if(c!=0){
        cout << -1 << endl;
    }else {
        cout << b << endl;
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
