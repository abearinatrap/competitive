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
    int n,l,h;
    cin >> n >> l >> h;
    vi nums(n);
    vi sums(n+1);
    cin >> nums[0];
    sums[1] = nums[0];
    for(int i=1;i<n;++i){
        cin >> nums[i];
        sums[i+1] = sums[i] + nums[i];
    }
    /*
    fo(i,n){
        cout << nums[i] << " " << sums[i] << endl;
    } cout << endl;
    */

    int min_p = INT_MAX;
    int max_p = 0;

    for(int i=l; i<=h; ++i){
        for(int j=0; j<i; ++j){
            //get number of profitable segments
            int np=0;
            //not normal sized beginning
            if(j!=0){
                if(sums[j]>0) ++np;
            }
            //not normal sized end
            int nd=(n-j)%i;
            if(nd!=0){
                if(sums[n]-sums[n-nd]>0) ++np;
            }
            //cout << "np ends: " << np << endl;
            //middle
            int nt = (n-j)/i;
            for(int k=1;k<=nt;++k){
                //cout << j+i*k << " " << j+i*(k-1) << "\t" << sums[j+i*k]-sums[j+i*(k-1)] << endl;
                if(sums[j+i*k]-sums[j+i*(k-1)]>0) ++np;
            }

            //cout << i << " " << j << " "<< np << endl;
            min_p=min(min_p, np);
            max_p=max(max_p, np);
        }
    }
    cout << min_p << " " << max_p << endl;
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    solve();
    return 0;
}
