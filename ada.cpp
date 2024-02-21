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

bool vsame(vi &t, int s){
    if(t.empty()) return true;
    int a=t[0];
    for(int i=1;i<s;++i){
        if (t[i]!=a) return false;
    }
    return true;
}

void solve(){
    in(n);
    vi nums(n);
    fo(i,n){
        cin >> nums[i];
    }
    vi ends;
    vi dif(n-1);
    int m = n;
    while(true){
        --m;
        ends.push_back(nums[m]);

        assert(m>0);
        
        fo(i,m){
            dif[i]=nums[i+1]-nums[i];
        }
        
        if(vsame(dif,m)){
            ll sum=dif[0];
            for(int i=sz(ends)-1;i>=0;--i){
                sum += ends[i];
            }
            cout << sz(ends) << " " << sum << endl;
            return;
        }
        
        fo(i,m){
            nums[i] = dif[i];
        }
    }
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    solve();
    return 0;
}