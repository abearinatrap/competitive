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

int rec(int l,int r){
    if (l==r) return 1;
    if (l>r){
        return 2*rec(l-r,r)+1;
    }
    return 2*rec(l,r-l);
}

void solve(){
    in(k);
    string snum;
    int l,r;
    cin >> l;
    cin.ignore();
    cin >> r;
    cout << k << " " << rec(l,r) << endl;
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
