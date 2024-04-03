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

vi c(301);


void fill(){
    vi cd={3,6,10,15};
    for(int i=1;i<301;++i){
        c[i]=c[i-1]+1;
        for (auto co : cd){
            if(i-co>=0){
                c[i]=min(c[i],c[i-co]+1);
            }
        }
    }
}

void solve(){
    in(n);
    ll sum=0;
    if(n>90){
        ll a = n/15;
        a-=3;
        sum+=a;
        n -= a*15;
        sum+=c[n];
    }else{
        sum+= c[n];
    }
    cout << sum << endl;
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int repeat;
    cin >> repeat;
    fill();
    while(repeat--){
        solve();
    }
    return 0;
}