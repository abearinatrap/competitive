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
#define fo(i, n) for (int i = 0; i < n; i++)
#define rep(i, a, b) for (int i = a; i < b; i++)
#define C(i) cin >> i

void solve(){
    int n; C(n);
    int t;
    vector<int> a_n(n);
    int am=0,bm=0;
    int a,b;
    fo(i,n-1){
        cin >> a_n[i];
        am=max(am,a_n[i]);
    }
    cin >> a;
    fo(i,n-1){
        cin >> t;
        if(a_n[i]<t){
            swap(a_n[i],t);
            am=max(am,a_n[i]);
        }
        bm=max(bm,t);
    }
    cin >> b;
    if(a>=am&&b>=bm){
        cout << "Yes" << endl;
    }else if(a>=bm && b>=am){
        cout << "Yes" << endl;
    }else {
        cout << "No" << endl;
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
