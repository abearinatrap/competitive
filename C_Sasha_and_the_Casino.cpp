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
    ll k,x,a;
    cin >> k >> x >> a;
    //cout << k << " " << x << " " << a << ": " << k*(a-x) << endl;
    ll lost = 0;
    ll bet = 1;
    ll lbet=0, b=0, growth=0;
    if(!(k*(a-x)>a)){
        cout << "NO" << endl;
        return;
    }
    for(int i=0;i<x;++i){
        
        //16026
        /*
        12
        18
        22
        25
        28
        30
        32
        33
        35
        36 11
        37 12
        38 13
        39 14
        ..
        41 16
        42 18
        43 19
        44 21
        45 23

        72 196
        73 212
        74 230
        75 249
        */
        
       
        if(bet*k <= lost+bet){
            b=bet;
            bet+=b/k;
            while((bet-1)*k > lost+bet-k){
                //cout << "back"<< endl;
                --bet;
                ++growth;
            }
            if(b%k && bet*k <= lost+bet){
                //cout << "d" << b%k << endl;
                bet++;
            }
        }
        
        while(bet*k <= lost+bet){
            //cout << bet*k << " " << lost+bet << endl;
            ++bet;
            ++growth;
        }

        
        if(bet>a){
            cout << "NO" << endl;
            return;
        }
        lost+=bet;
        //cout << i << ": " << bet << " " << lost << " " << bet*k << endl;
    }
    //cout << lost << endl;
    if((a-lost)*k < a){
        cout << "NO" << endl;
        return;
    }

    if(k*(a-x)>a){
        cout << "YES" << endl;
        return;
    }else{
        cout << "NO" << endl;
    }
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

