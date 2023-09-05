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

#define CLRS() cin.ignore(INT_MAX,'\n')

void solve(){
    string s;
    cin >> s;
    vi d(26,0);
    for(auto c: s){
        d[c-'a']++;
    }
    int maxn=0;

    fo(i,26){
        if(maxn<d[i]){
            maxn=d[i];
        }
    }

    int ss = sz(s);
    int ma = (int)ceil(log(ss));
    if(maxn==ss){
        cout << 0 << endl;
        return;
    }else if (maxn==ss-1){
        cout << 1 << endl;
    }

    int minn=1e5;
    fo(a,26){
        char c = a + 'a';
        ss = sz(s);
        stringstream st(s);
        for(int i=0;i<ma;++i){
            string cs = st.str();
            st.clear();
            st.str(std::string());
            ss = sz(cs);
            bool rmv = true;
            for(int j=0;j<ss;++j){
                if(cs[j]==c){
                    st<<c;
                    rmv=true;
                }else {
                    if(!rmv){
                        st << cs[j];
                        rmv=true;
                    }else {
                        rmv=false;
                    }
                }
            }
            string ts=st.str();

            if(sz(ts)==1){
                cout << ts << " " << i << c << endl;
            }
            if(cs==ts){
                minn=min(minn,i);
                break;
            }
        }
    }
    
    cout << min(minn,ma) << endl;
    /*
    codeforces
    oefre
    ere
    e
    
    
    */
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
