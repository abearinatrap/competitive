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
    in(n);in(x);in(y);
    vi num(n);
    unordered_map<int,int> c;
    fo(i,n){
        cin >> num[i];
        c[num[i]]++;
    }
    int p=0;
    for(auto it=c.begin();it!=c.end();it++){
        if(it->second>1){
            if(it->first*2%x==0){
                // add n choose 2
                int a = it->second;
                p+=((ll)a-1)*a/2;
            }
        }
        auto it2=it;it2++;
        for(;it2!=c.end();it2++){
            int a = it->first,b=it2->first;
            if((a+b)%x==0 && (a-b)%y==0){
                p+=(ll)it->second * it2->second;
            }
        }
    }
    cout << p << endl;
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int repeat;
    cin >> repeat;
    while(repeat--){
        solve();
        //return 0;
    }
    return 0;
}