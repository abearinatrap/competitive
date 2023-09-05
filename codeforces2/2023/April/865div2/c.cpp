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

#define CLRS() cin.ignore(INT_MAX,'\n')

void solve(){
    int n;
    C(n);
    vi a(n);
    fo(i,n){
        cin >> a[i];
    }

    // if all descending and even number, can't change
    bool increasing=true;
    int ind=-1;
    bool fail=false;
    fo(i,n-1){
        if(a[i]>a[i+1]){
            fail=true;
            bool flip=true;
            while(true){
                i++;
                if(i<n-1){
                    if(flip){
                        if(a[i]>a[i+1]){
                            
                        }
                    }
                }
            }
        }
    }

    if(increasing){
        cout << "YES" << endl;
        return;
    }

    if((n&1)==0){

        cout << "NO" << endl;
    }else{
        cout << "YES" << endl;
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
