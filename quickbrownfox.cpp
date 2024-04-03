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
    string line;
    getline(cin,line);
    vi l(26);
    fo(i,sz(line)){
        char c=tolower(line[i]);
        if(c>='a' && c<='z'){
            l[c-'a']++;
        }
    }
    vi missing;
    fo(i,26){
        if(l[i]==0){
            missing.pb('a'+i);
        }
    }
    if(!missing.empty()){
        cout << "missing ";
        for(auto c:missing){
            cout << (char)c;
        }
        cout << endl;
    }else{
        cout << "pangram" << endl;
    }

    vi array;int n;
    
    int best = 0, sum = 0;
    for (int k = 0; k < n; k++) {
        sum = max(array[k],sum+array[k]);
        best = max(best,sum);
    }
    cout << best << "\n";
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int repeat;
    cin >> repeat;
    cin.ignore(1,'\n');
    while(repeat--){
        solve();
    }
    return 0;
}