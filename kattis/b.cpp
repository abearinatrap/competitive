#include<bits/stdc++.h>
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

void solve(){
    int n; C(n);
    vvi enc(n,vi(n));
    fo(i,n){
        fo(j,n){
            cin >> enc[i][j];
        }
    }
    string a;
    cin.ignore(INT_MAX,'\n');
    getline(cin,a);
    int as=sz(a);
    if(as%n!=0){
        string b(n-as%n,' ');
        a += b;
    }
    as=sz(a);
    vi d(n);
    vi o(n);
    for(int i=0;i<as;i+=n){
        for(int j=0;j<n;++j){
            if(a[i+j]>='A' && a[i+j] <= 'Z'){
                a[i+j]-='A';
            }else if(a[i+j]>='0' && a[i+j] <= '9'){
                a[i+j]-='0';
                a[i+j]+=26;
            }else{
                a[i+j]=36;
            }
            d[j]=(int)a[i+j];
        }
        fo(a,n){
            fo(b,n){
                o[a]+=(enc[a][b]*d[b]);
            }
            o[a]=o[a]%37;
        }
        fo(a,n){
            if(o[a]<26){
                cout << (char)(o[a]+'A');
            }else if(o[a]>=26 && o[a] <36) {
                cout << (char)(o[a]-26+'0');
            }else {
                cout << " ";
            }
            o[a]=0;
        }
    }
    cout << endl;
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    solve();
    return 0;
}
