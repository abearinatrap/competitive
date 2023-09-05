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
#define CLR() cin.ignore(INT_MAX,'\n')

void solve(){
    int n; C(n);

    if(n==1){
        cout << 0 << endl;
        return;
    }else{
        //go from beginning instead of end
        for(int i=2;i<sqrt(n)+1; ++i){
            if(n%i==0){
                cout << n-(n/i) << endl;
                return;
            } 
        }
    }
    cout << n-1 << endl;
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    solve();
    return 0;
}
