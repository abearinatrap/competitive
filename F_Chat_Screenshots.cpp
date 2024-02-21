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
    in(n);in(k);
    if(k==1){
        cout << "YES" << endl;return;
    }
    int t;
    cin >> t;
    vi num(n-1);
    fo(i,n-1){
        cin >> num[i];
        cout << num[i];
    }
    cout << endl;

    bool oin = false;
    fo(j,k-1){
        bool skip = false,as=false;
        in(a); // first num
        fo(i,n-1){
            in(na);
            if(na==t && !oin){
                num.insert(num.begin()+i,t);
                oin = true;
            }else if(na!=num[i+skip+as]){
                if(num[i+skip+as]==a){
                    as = true;
                }
                else if(!skip){
                    skip = true;
                    if(na!=num[i+skip+as]){
                        cout << "NOd" << na << num[i+as] << endl;
                        return;
                    }
                }else{
                    cout << "NO" << endl;
                    return;
                }
            }
        }
    }
    cout << "YES" << endl;
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