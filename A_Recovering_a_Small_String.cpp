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
    in(n);
    vi s(3);
    if(n>=28){
        s[2]=26;
        n-=26;
    }else{
        s[2]=n-2;
        n=2;
    }
    if(n==2){
        s[1]=s[0]=1;
        cout << (char)('a'+s[0]-1) << (char)('a'+s[1]-1) << (char)('a'+s[2]-1)<< endl;
        return;
    }

    if(n>=27){
        s[1]=26;
        n-=26;
    }else{
        s[1]=n-1;
        n=1;
    }

    s[0] = n;
    cout << (char)('a'+s[0]-1) << (char)('a'+s[1]-1) << (char)('a'+s[2]-1)<< endl;
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