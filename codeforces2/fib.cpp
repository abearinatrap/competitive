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

#define CLRS() cin.ignore(INT_MAX,'\n')

void solve(){
    
}


int fib(int n){
    if (n==0 || n==1){
        return n;

    }
    int a=0;
    int b=1;
    for(int i=1;i<n;++i){
        int temp = a+b;
        a=b;
        b=temp;
    }
    return b;
}
vector<int> dp(1000,-1);
dp[0]=0;
dp[1]=1;
int fib(int n){
    if (n==0 || n==1){
        return n;

    }

}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout << fib(4) << endl;
    return 0;
}
