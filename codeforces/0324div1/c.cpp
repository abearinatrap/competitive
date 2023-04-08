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
#define fo(i, n) for (int i = 0; i < n; i++)
#define rep(i, a, b) for (int i = a; i < b; i++)
#define C(i) cin >> i;

void solve(){
    int n;
    cin >> n;
    ll sum=0;
    vector<ll> a(n);
    for(int i=0;i<n;++i){
        cin >> a[i];
    }
    ll t;
    for(int i=0;i<n;++i){
        cin >> t;
        t=t-a[i];
        if(t<0) {
            cout << "-1" << endl;
            return;
        }
        sum+=t;
    }
    cout << sum << endl;
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    solve();
    return 0;
}
