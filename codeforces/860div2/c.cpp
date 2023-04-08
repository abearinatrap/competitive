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
#define C(i) cin >> i;

void solve(){
    int n; C(n);
    set<ll> num;
    int count=0;

    int a,b;
    cin >> a >> b;
    int as=(int)sqrt(a);
    for(int i=1;i<=as;++i){
        if(a%i==0){
            num.insert(i*b);
            num.insert(a/i*b);
        }
    }

    for(int i=1;i<n;++i){
        cin >> a >> b;
        set<ll> tn;
        ll tmin=*num.begin(),tmax=*num.rbegin();
        as=(int)sqrt(a);
        for(int j=1;j<=as;++j){
            if(a%j==0){
                ll v=(ll)j*b,vv=(ll)a/j*b;
                if(v>=tmin){
                    tn.insert(v);
                }
                if(vv<=tmax){
                    tn.insert(vv);
                }
            }
        }


        set<ll> f;
        set_intersection(num.begin(),num.end(),tn.begin(),tn.end(),inserter(f,f.begin()));

        if(f.empty()){
            count++;
            for(int j=1;j<=as;++j){
                if(a%j==0){
                    ll v=(ll)j*b,vv=(ll)a/j*b;
                    tn.insert(v);
                    tn.insert(vv);
                }
            }
            num=tn;
        }

        else{
            num=f;
        }
    }
    cout << count + 1 << endl;
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
