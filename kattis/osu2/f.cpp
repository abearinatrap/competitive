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
#define C(i) cin >> i

#define CLRS() cin.ignore(INT_MAX,'\n')

void solve(){
    int n; 
    str a,b;
    cin >> n >> a >> b;
    vi al(26), bl(26);
    int r=0,s=0;
    fo(i,n){
        if(a[i]==b[i]){
            ++r;
        }else{
            al[a[i]-'A']++;
            bl[b[i]-'A']++;
        }
    }
    fo(i,26){
        if(al[i]>0){
            if(bl[i]>=al[i]){
                s+=al[i];
            }else{
                s+=bl[i];
            }
        }
    }
    cout << r << " " << s << endl;
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    solve();
    return 0;
}
