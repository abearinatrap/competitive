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
    int n,m;
    cin >> n >>m;
    int x1,y1,x2,y2;
    cin >> x1 >> y1 >> x2 >> y2;
    int num = 4;
    if(x1==1||x1==n){
        num--;
    }
    if(y1==1||y1==m){
        num--;
    }
    if(num==2){
        cout << 2 << endl;
        return;
    }
    int save = num;
    num =4;
    if(x2==1||x2==n){
        num--;
    }
    
    if(y2==1||y2==m){
        num--;
    }
    cout << min(num,save) << endl;
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
