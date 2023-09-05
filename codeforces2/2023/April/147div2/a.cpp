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
    string s;
    cin >> s;
    int total=0;
    if(s[0]=='?'){
        total+=9;
    }else{
        total+=1;
    }
    if(s[0]=='0') {cout << 0 << endl; return;}
    int ss = sz(s);
    if(ss==1){
        cout << total << endl;
        return;
    }

    for(int i=1;i<ss-1;++i){
        if(s[i]=='?'){
            total*=10;
        }
    }
    if(s[ss-1]=='?'){
        total*=10;
    }
    cout << total << endl;
    return;
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
