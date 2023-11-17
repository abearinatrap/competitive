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
    double s=0;
    int num=0;
    int n;
    double cur;
    double maxn=0;
    cin >> n;
    vi nums(n);
    fo(i,n){
        cin >> nums[i];
        s+=nums[i];
        num++;
        cur = s/num;
        maxn = max(maxn,cur);
    }

    s=0;num=0;
    of(i,n-1){
        s+=nums[i];
        num++;
        cur = s/num;
        maxn = max(maxn,cur);
    }

    printf("%.10lf",maxn);
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    solve();
    return 0;
}
