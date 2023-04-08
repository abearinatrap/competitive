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
    string s;
    int n; C(n);
    cin >> s;
    int in=0;
    for(int i=1; i<n; ++i){
        if(s[i]=='a'){
            in=i;
        }else if(s[i]==min(s[in],s[i])){
            in=i;
        }
    }

    stringstream ss;
    ss << s[in];
    fo(j,n){
        if(j==in) continue;
        ss << s[j];
    }
    cout << ss.str() << endl;
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
