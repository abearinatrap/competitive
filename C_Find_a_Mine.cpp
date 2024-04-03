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

int mh(int n, int m, int n1, int m2){
    return abs(n-n1)+abs(m-m2);
}

void solve(){
    int n,m;
    cin >> n >> m;
    cout << "? 1 1" << endl;
    int md;
    cin >> md;
    vi mhd(4);
    mhd[0]= md;
    if(md==0){
        cout << "! 1 1" << endl;
        return;
    }else if(md==1){
        cout << "? 1 2" << endl;
        cin >> md;
        if(md!=0){
            cout << "! 2 1" << endl;
        }else{
            cout << "! 1 2" << endl;
        }
        return;
    }

    vi gn(8);
    gn[0]=1+md;
    gn[1]=1;
    if(gn[0]>n){
        gn[1]=1+gn[0]-n;
        gn[0]=n;
    }
    gn[3]=1+md;
    gn[2]=1;
    if(gn[3]>m){
        gn[2]=1+gn[3]-m;
        gn[3]=m;
    }

    cout << "? " << gn[0] << " " << gn[1] << endl;
    cin >> mhd[1];
    cout << "? " << gn[2] << " " << gn[3] << endl;
    cin >> mhd[2];
    if(mhd[1]==0){
        cout << "! " << gn[0] << " " << gn[1] << endl;
        return;
    }else if(mhd[2]==0){
        cout << "! " << gn[2] << " " << gn[3] << endl;
        return;
    }

    if(mhd[1]%2==0 && mhd[2]%2==0){
        gn[4]=gn[0]-mhd[1]/2;
        gn[5]=gn[1]+mhd[1]/2;
        gn[6]=gn[2]+mhd[2]/2;
        gn[7]=gn[3]-mhd[2]/2;
        cout << "? " << gn[4] << " " << gn[5] << endl;
        cin >> mhd[3];
        if(mhd[3]==0){
            cout << "! " << gn[4] << " " << gn[5] << endl;
            return;
        }else{
            cout << "! " << gn[6] << " " << gn[7] << endl;
            return;
        }
    }else if(mhd[1]%2==0){
        gn[4]=gn[0]-mhd[1]/2;
        gn[5]=gn[1]+mhd[1]/2;  
        cout << "! " << gn[4] << " " << gn[5] << endl;
    }else{
        gn[6]=gn[2]+mhd[2]/2;
        gn[7]=gn[3]-mhd[2]/2;
        cout << "! " << gn[6] << " " << gn[7] << endl;
    }
    return;
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