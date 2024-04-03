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
    if(n==1){
        cout << 1 << endl;
        return;
    }
    else if(n<=3){
        cout << "NO SOLUTION" << endl;
        return;
    }
    int max=(n%2?n-1:n);
    cout << n/2 << " " << max << " "; 
    for(int i=1;i<n/2;++i){
        cout << i << " " << max-i << " "; 
    }
    if(n%2){
        cout << n;
    }
    cout << endl;
    // 2 4 1 3
    // 2 4 1 3 5
    // 3 6 1 5 2 4
    // 4 8 1 7 2 6 3 5
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    solve();
    return 0;
}