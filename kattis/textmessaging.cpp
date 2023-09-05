#include <bits/stdc++.h>
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
#define CLR() cin.ignore(INT_MAX,'\n')
#define iint(a) int a;cin>>a
#define pq priority_queue

ll solve(){
    int p,k,l;
    cin >> p >> k >> l;
    vi let(l);
    pq<pair<int,int>> pl;
    fo(i,l){
        C(let[i]);
        pl.push({let[i],i});
    }
    ll sum=0;
    for(int i=0,a=0;i<l;i+=k,++a){
        for(int j=0;j<k&&(i+j)<l;++j){
            sum+=(1+a)*pl.top().first;
            pl.pop();
        }
    }
    return sum;
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int repeat;
    cin >> repeat;
    int n=repeat;
    while(repeat--){
        cout << "Case #" <<n-repeat<< ": " <<solve() << endl;
    }
    return 0;
}
