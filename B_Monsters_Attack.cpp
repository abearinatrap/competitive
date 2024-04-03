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
    ll n,k;
    cin >> n >> k;
    vi mh(n);
    fo(i,n){
        cin >> mh[i];
    }
    priority_queue<pii, vector<pii>, greater<pii>> m;
    fo(i,n){
        int t; cin >> t;
        if(t<0){
            t=-t;
        }
        m.push(make_pair(t,mh[i]));
    }
    ll extra=k;
    ll cd=1;
    while(!m.empty()){
        pii c = m.top();
        //cout << c.fi << " " << c.se << endl;
        m.pop();
        if(extra>=c.se){
            extra-=c.se;
        }else{
            c.se-=extra;
            extra=k;
            cd++;
            m.push(make_pair(c.fi,c.se));
        }
        //cout << cd << " " << extra << " " << c.fi<< endl;
        if(cd>c.fi){
            cout << "NO" << endl;
            return;
        }
    }
    cout << "YES" << endl;
    return;
}

/*
void solve(){
    ll n,k;
    cin >> n >> k;
    vi mh(n);
    fo(i,n){
        cin >> mh[i];
    }
    priority_queue<pii, vector<pii>, greater<pii>> m;
    fo(i,n){
        int t; cin >> t;
        if(t<0){
            t=-t;
        }
        m.push(make_pair(t,mh[i]));
    }
    ll extra=k;
    ll cd=1;
    while(!m.empty()){
        pii c = m.top();
        //cout << c.fi << " " << c.se << endl;
        m.pop();
        if(extra>=c.se){
            extra-=c.se;
            continue;
        }else{
            c.se-=extra;
        }
        ll ed=c.se/k;
        ll ex=c.se%k;
        if(ex){
            ed++;
        }
        extra = ex;
        cd+=ed;
        //cout << cd << " " << extra << " " << c.fi<< endl;
        if(cd>c.fi){
            cout << "NO" << endl;
            return;
        }
    }
    cout << "YES" << endl;
    return;
}
*/

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