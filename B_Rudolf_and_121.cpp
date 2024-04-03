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
    in(n);
    vi nums(n);
    ll ns=0;
    fo(i,n){
        cin >> nums[i];
        ns+=nums[i];
    }
    if(ns%4!=0){
        cout << "NO" << endl;
        return;
    }

    for(int i=0;i<n-2;++i){
        if(nums[i]<0){
            goto bad;
        }
        int t=nums[i];
        nums[i]-=t;
        nums[i+1] -= 2*t;
        nums[i+2] -= t;
    }

    fo(i,n){
        if(nums[i]!=0) goto bad;
    }
    
    cout << "YES" << endl;
    return;
bad:
    cout << "NO" << endl;
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