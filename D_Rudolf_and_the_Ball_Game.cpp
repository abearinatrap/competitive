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

int ct(int x, int p, int n){
    int a = (x+p)%n;
    return (a==0?n:a);
}

int cct(int x, int p, int n){
    if(x-p<0){
        return (x-p+n);
    }
    int a = x-p;
    return (a==0?n:a);
}

void solve(){
    int n,m,x;
    cin >> n >> m >> x;
    set<int> have;
    have.insert(x);
    fo(i,m){
        int p;
        char d;
        cin >> p >> d;
        set<int> nh;
        for(auto f : have){
            if(d=='?'){
                nh.insert(ct(f,p,n));
                nh.insert(cct(f,p,n));
            }else if(d=='0'){
                nh.insert(ct(f,p,n));
            }else{
                nh.insert(cct(f,p,n));
            }
        }
        have=nh;
    }
    cout << have.size() << endl;
    for(auto f : have){
        cout << f << " ";
    }cout << endl;
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