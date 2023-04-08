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
    string a;
    cin >> a;
    map<char,int> f;
    fo(i,4){
        f[a[i]]++;
    }
    if(f.size()==1){
        cout << -1 << endl;
        return;
    }else if(f.size()==2){
        for(auto it : f){
            if(it.second==2){
                cout << 4 << endl;
            }else{
                cout << 6 << endl;
            }
            return;
        }
    }else {
        cout << 4 << endl;
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
