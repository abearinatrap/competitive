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
    int n,k;
    cin >> n >> k;
    vvi m(n,vi(n));
    ll wrong = 0;
    ll lim1 = n/2;

    fo(i,lim1){
        fo(j,n){
            cin >> m[i][j];
        }
    }
    if(n%2){
        vi t(n);
        fo(j,n){
            cin >> t[j];
        }
        fo(j,lim1){
            if(t[n-1-j]!=t[j]){
                wrong++;
            }
        }
    }

    fo(i,lim1){
        vi t(n);
        fo(j,n){
            cin >> t[j];
        }
        fo(j,n){
            if(m[lim1-1-i][n-1-j]!=t[j]){
                wrong++;
            }
        }
    }


    if(wrong > k) {
        goto bad;
    }


    if((k-wrong)%2 != 0){
        if(n%2!=1) goto bad;
    }
    // printMatrix(r);
    // cout << endl;
    // printMatrix(m);
good:
    cout << "YES" << endl;
    return;
bad:
    cout << "NO" << endl;
    return;
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
