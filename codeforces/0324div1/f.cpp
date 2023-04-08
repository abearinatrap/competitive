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
#define C(i) cin >> i;

void solve(){
    int n,d;
    cin >> n >> d;
    vector<int> nu;
    int c=1;
    int ct;
    cin >> ct;

    int r;
    for(int i=1;i<n;++i){
        cin >> r;
        // cout << r << " ct:" << ct << " c:" << c << endl;
        if(r<=ct){
            c++;
            if(i==n-1){
                nu.push_back(c);
                // cout << "l u " << c << endl;
            }
        }else{
            nu.push_back(c);
            ct = r;
            // cout << c << endl;
            c=1;
            // cout << "empty ct: " << ct << " c:" << c << endl;
            if(i==n-1){
                nu.push_back(c);
                // cout << "l u " << c << endl;
            }
        }
    }
   

    sort(nu.begin(),nu.end(),greater<int>());
    /*
    for(auto t: nu){
        cout << t << " ";
    }cout << endl;
    */

    ll psum=0;
    for(int i=0;i<d&&i<nu.size();++i){
        //cout << i << endl;
        psum+=nu[i];
    }

    cout << psum << endl;
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    solve();
    return 0;
}
