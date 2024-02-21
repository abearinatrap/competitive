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
    in(n);in(a);in(b);
    int x=0,y=0;
    fo(i,n-1){
        in(t);
        if (t==a) x++;
        else if (t==b) y++;
    }
    if(x==0 && y==0){
        cout << -1 <<endl;
    }else if (x==0){
        cout << a << endl;
    }else if (y==0){
        cout << b << endl;
    }else{
        fo(i,n){
            cout << i+1 << endl;
        }
    }
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    solve();
    return 0;
}
