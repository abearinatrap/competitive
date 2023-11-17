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

bool chk(int a,int b, vvi &d){
    if(a-1>=0 && b-2>=0){
        if (d[a-1][b-2]==1) return false;
    }
    if(a-1>=0 && b+2<=4){
        if (d[a-1][b+2]==1) return false;
    }

    if(a-2>=0 && b-1>=0){
        if (d[a-2][b-1]==1) return false;
    }
    if(a-2>=0 && b+1<=4){
        if (d[a-2][b+1]==1) return false;
    }

    if(a+1<=4 && b-2>=0){
        if (d[a+1][b-2]==1) return false;
    }
    if(a+1<=4 && b+2<=4){
        if (d[a+1][b+2]==1) return false;
    }

    if(a+2<=4 && b-1>=0){
        if (d[a+2][b-1]==1) return false;
    }
    if(a+2<=4 && b+1<=4){
        if (d[a+2][b+1]==1) return false;
    }
    return true;
}

void solve(){
    string line;
    vvi d(5,vi(5));
    int cnt=0;
    fo(i,5){
        getline(cin,line);
        fo(j,5){
            if(line[j]=='k'){
                d[i][j]=1;
                cnt++;
                if (!chk(i,j,d)){
                    cout << "invalid" << endl; return;
                }
            }
        }
    }
    if(cnt!=9)
        {cout << "invalid" << endl; return;}
    cout << "valid" << endl; return;
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    solve();
    return 0;
}
