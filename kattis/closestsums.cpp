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
    int n,count=1;
    while(C(n)){
        cout << "Case " << count++ << ":" << endl;
        vector<int> v(n);
        for(int i = 0; i < n; i++) {
            cin >> v[i];
        }
        int m;
        cin >> m;

        for(int i = 0; i < m; i++) {
            int target;
            cin >> target;
            int c= v[0]+v[1];

            for(int j = 0; j < n; j++) {
                for(int k = j+1; k < n; k++) {
                    int sum = v[j] + v[k];
                    if(abs(sum - target) < abs(c-target)) {
                        c = sum;
                    }
                }
            }

            cout << "Closest sum to " << target << " is " << c << ".\n";
        }
    }
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    solve();
    return 0;
}
