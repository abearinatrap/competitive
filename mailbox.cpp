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

// k,a,b
//number of crackers needed to find breaking point between a and b matches given k mailboxes
int dp[11][101][101];

/*

When k=1, it is simply just the sum given in the problem description
If k>1, we can test numbers because we have backup mailbox(es)
Find best split values that give you smallest number of crackers


Between 1 and m, if we try c firecrackers, there are two outcomes
- mailbox explodes. we know number is between 1 and c-1, and now have k-1 mailboxes
- mailbox doesn't explode. we know number is between c and m, and still have k mailboxes

Either way, the sum of used mailboxes has now added c



Because we dont know what will happen, the smallest number of crackers given the test split value 'c' is the maximum of the two
So now we will search for best c split value. 

We save best number of crackers in 'dp' array for given k, a, b : just like fibonacci problem

*/

int mailbox(int k,int a,int b){
    // if saved return val
    if(dp[k][a][b]!=-1){
        return dp[k][a][b];
    }
    //if 1, must test individually
    if(k==1){
        return (b*(b+1))/2 - (a*(a+1))/2;
    }
    if(a==b){
        return 0;
    }
    //otherwise we can test but its min of ones before which are max
    int minv = INT_MAX;
    // at a guess of i -> either it blows up and its before and it doesnt blow up and its after
    // the minimum number of crackers needed is the maximum of the guess (have to choose worst case)
    for(int i=a+1;i<=b;++i){
        minv = min(minv, i + max(mailbox(k-1,a,i-1),mailbox(k,i,b)));
    }

    return dp[k][a][b]=minv;
}

void solve(){
    in(k); in(m);
    cout << mailbox(k,0,m) << endl;
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    // set all values in dp to -1
    memset(dp, -1, sizeof(dp));

    int repeat;
    cin >> repeat;
    while(repeat--){
        solve();
    }
    return 0;
}
