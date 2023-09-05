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

#define CLRS() cin.ignore(INT_MAX,'\n')

void solve(){
    vi a(3);
    cin >> a[0] >> a[1] >> a[2];
    sort(all(a));
    int diff1=a[1]-a[0], diff2=a[2]-a[1];
    if(diff1==diff2){
        cout << a[2]+diff2 << endl;
    }
    else if(diff1>diff2){
        cout << a[0] + diff2 << endl;
    }else{
        cout << a[1] + diff1 << endl;
    }

}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    solve();
    return 0;
}
