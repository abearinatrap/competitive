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
    vi num(n);
    fo(i,n){
        cin >> num[i];
    }
    if(n==1){
        cout << 0 << endl;
        return;
    }else if (n==2){
        cout << (num[0]==num[1] ? 0:1) << endl;
        return;
    }
    int l = 0, r=n-1;
    if(num[0]!=num[n-1]){
        while(num[l]==num[0] && l<=n-1){
            l++;
        }
        while(num[r]==num[n-1] && r>0){
            r--;
        }
        int d = max(n-1-r,l);
        cout << n-d << endl;
    }else{
        while(num[l]==num[0] && l<=n-1){
            l++;
        }
        while(num[r]==num[n-1] && r>0){
            r--;
        }
        
        if(r<l){
            cout << 0 << endl;
        }else if (r==l){
            cout << 1 << endl;
        }else{
            cout << r-l+1 << endl;
        }
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