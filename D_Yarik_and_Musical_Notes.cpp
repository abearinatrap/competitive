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

map<int,ll> f;
ll fact(int n) {
    if (f.find(n)!=f.end()) return f[n];
    if (n == 0 || n == 1) return 1;
    else {
        f[n] = n * fact(n - 1);
        return f[n];
    }
}

void solve(){
    in(n);
    /*
    vi a(n);
    sort(all(a));
    */
    map<int,int> d;
    fo(i,n){
        in(a);
        d[a]++;
    }
    /*
    for(auto c: a){
        cout << c << " ";
    }cout << endl;
    */
    ll sum=0;
    for(auto a:d){
        //cout << a.first << " " << a.second << endl;
        if (a.second > 1){
            sum += fact(a.second) / (fact(2) * fact(a.second-2));
        }
    }

    sum += d[1] * d[2];
    cout << sum << endl;
    

    // 6 4 3 1 1 1 3
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
