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
    int r,c;
    cin >> r >> c;
    vector<string> rows;
    vvi output(r, vi(c,0)); // 0=. 1=#, 2=a
    cin.ignore(1,'\n');
    fo(i,r){
        string t;
        getline(cin, t);
        rows.pb(t);
        //cout << rows[r];
    }
    fo(i,c){
        int lo = r, na = 0; //d is current ind, lo is last_obstacle, na is num_apples
        for(int d=r-1;d>=0;--d){
            //cout << i << " " << d  << " " << rows[d][i] << "]"<< endl;
            assert(d>=0);assert(i<c);
            
            if(rows[d][i]=='#'){
                //cout << na << endl;
                output[d][i]=1;
                for(int j=0;j<na;++j){
                    output[lo-j-1][i]=2;
                }
                lo=d;
                na=0;
            }else if(rows[d][i]=='a'){
                ++na;
            }
            
        }
        for(int j=0;j<na;++j){
            output[lo-j-1][i]=2;
        }
    }

    fo(i,r){
        fo(j,c){
            if(output[i][j]==0){
                cout << ".";
            }else if(output[i][j]==1){
                cout << "#";
            }else{
                cout << "a";
            }
        }cout << endl;
    }
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    solve();
    return 0;
}