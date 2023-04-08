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

long search_closest(const std::vector<int>& sorted_array, int x) {

    auto iter_geq = std::lower_bound(
        sorted_array.begin(), 
        sorted_array.end(), 
        x
    );

    if (iter_geq == sorted_array.begin()) {
        return 0;
    }else if(iter_geq == sorted_array.end()) {
        return sorted_array.size() -1;
    }


    int a = *(iter_geq - 1);
    int b = *(iter_geq);

    //integer
    if (abs(x - a) < abs(x - b)) {
        return iter_geq - sorted_array.begin() - 1;
    }
    
    /*
    double
    if (fabs(x - a) < fabs(x - b)) {
        return iter_geq - sorted_array.begin() - 1;
    }
    */
    return iter_geq - sorted_array.begin();

}

void solve(){
    int n,x,y,xx,yy;
    cin >> n >> x >> y >> xx >> yy;
    //max is only ever n/2-1
    //min n is 2
    // divide by 2 to get row
    // abs(f-n) to get circular outrow
    x=min(n+1-x,x);
    y=min(n+1-y,y);
    xx=min(n+1-xx,xx);
    yy=min(n+1-yy,yy);
    ll ra = min(x,y);
    ll rb =  min(xx,yy);
    //cout << ra << " " << rb  << endl;
    cout << abs(ra-rb) << endl;
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
