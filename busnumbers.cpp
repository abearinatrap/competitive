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
#define C(i) cin >> i
#define in(i) int i; cin >> i

#define CLRS() cin.ignore(INT_MAX,'\n')

void solve(){
    in(n);
    vi num(n);
    fo(i,n){
        cin >> num[i];
    }
    sort(all(num));

    int start = num[0];
    int last = num[0];
    for(int i=1;i<n;++i){
        //cout << "num" << num[i] << endl;
        if(num[i] == last+1){
            last = num[i];
        }else{
            if(start!=last){
                if (last-start>1){
                    cout << start << "-" << last;
                }else{
                    cout << start << " " << last;
                }
                

            }else{
                cout << start;
            }
            start = last = num[i];
            cout << " ";
        }
    }
    if(start!=last){
        if (last-start>1){
            cout << start << "-" << last;
        }else{
            cout << start << " " << last;
        }
    }
    else{
        cout << start;
    }
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    solve();
    return 0;
}
