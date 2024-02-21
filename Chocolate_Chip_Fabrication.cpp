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
    int n,m;
    cin >> n >> m;
    vvi d(n, vi(m,INT_MAX));
    queue<pii> q;
    queue<pii> q2;
    //string t; getline(cin,t);
    fo(i,n){
        string l;
        //getline(cin,l);
        cin >> l;
        //cout << l << endl;
        fo(j,m){
            //cout << i << " " << j << " " << l[j] << " " << endl;
            if(l[j]=='-'){
                d[i][j]=0;
                q.push({i,j});
            }
            if(j==0 || j == m-1){
                if(l[j]=='X'){
                    d[i][j]=1;
                    q2.push({i,j});
                }
            }
        }//cout << endl;
        if(i==0 || i==n-1){
            fo(j,m){
                if(l[j]=='X'){
                    d[i][j]=1;
                    q2.push({i,j});
                }
            }
        }
    }
    while(!q2.empty()){
        q.push(q2.front());
        q2.pop();
    }

    /*
    fo(i,n){
        fo(j,m){
            cout << (d[i][j] == INT_MAX ? 6 : d[i][j]) << " ";
            //if(d[i][j]==INT_MAX) continue;
        }cout << endl;
    }cout << endl;
    */

    int mn = 0;
    while(!q.empty()){
        pii p = q.front();
        q.pop();
        int a = p.fi, b = p.se;
        //cout << a << " " << b;
        if(b > 0 && d[a][b-1]>d[a][b]+1){
            d[a][b-1] = d[a][b]+1;
            q.push({a,b-1});
        }
        if(b < m-1 && d[a][b+1]>d[a][b]+1){
            d[a][b+1] = d[a][b]+1;
            q.push({a,b+1});
        }
        if(a > 0  && d[a-1][b]>d[a][b]+1){
            d[a-1][b] = d[a][b]+1;
            q.push({a-1,b});
        }
        if(a < n-1 && b > 0 && d[a+1][b] > d[a][b]+1){
            d[a+1][b] = d[a][b]+1;
            q.push({a+1,b});
        }
    }
    
    fo(i,n){
        fo(j,m){
            //cout << d[i][j] << " ";
            if(d[i][j]==INT_MAX) continue;
            mn = max(mn,d[i][j]);
        }//cout << endl;
    }
    
    cout << mn << endl;
}

int main(){
    //ios_base::sync_with_stdio(false);
    //cin.tie(NULL);
    solve();
    return 0;
}
