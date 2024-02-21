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
    in(n);in(m);
    priority_queue<int> h;
    ll tl=0;
    fo(i,n){
        string t;
        cin >> t;
        int a=0;
        of(i,sz(t)-1){
            if(t[i]=='0'){
                ++a;
            }else{
                break;
            }
        }
        tl+=sz(t);
        if(a!=0){
            //cout << t << " " << a << endl;
            h.push(a);
        }
       
    }
    bool anna = true;
    ll saved = 0;
    while(!h.empty()){
        if(anna){
            //cout << sz(h)<< " saved " << h.top() << endl;
            saved += h.top();
        }
        h.pop();
        anna = !anna;
    }
    //cout << tl-saved << " " << m << endl;
    cout << (tl-saved<=m? "Anna":"Sasha") << endl;
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