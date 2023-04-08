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
#define fo(i, n) for (int i = 0; i < n; i++)
#define rep(i, a, b) for (int i = a; i < b; i++)
#define C(i) cin >> i

void solve(){
    int m; C(m);
    vvi d(m);
    vi s(m);
    fo(i,m){
        int n; C(n);
        vi t(n);
        fo(j,n){
            cin >> t[j];
        }
        d[i]=t;
    }
    set<int> days;
    for(int i=d.size()-1;i>=0;--i){
        int j;
        for(j=0;j<d[i].size();j++){
            if(days.find(d[i][j])==days.end()){
                s[i]=d[i][j];
                break;
            }
        }
        if (j==d[i].size()){
            goto fail;
        }
        for(;j<d[i].size();j++){
            days.insert(d[i][j]);
        }
    }

    fo(i,m){
        cout << s[i] << " ";
    } cout << endl;
    return;
fail:
    cout << -1 << endl;
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
