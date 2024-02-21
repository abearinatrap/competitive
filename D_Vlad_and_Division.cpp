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
    in(n);
    vi nums(n);
    fo(i,n){
        cin >> nums[i];  
        //cout << "num: " << nums[i] << endl;
    }
    sort(all(nums));
    for (auto c:nums){
        //cout << c<< endl;
    }
    ll total =0;
    int i=0,j=n-1;
    while(i<j){
        int t1 = nums[i]^INT_MAX;
        while(nums[j]>t1 && j>i+1){
            j--;
            total++;
        }
        //cout << "mid "<< i << " " << j << " " << (nums[j]^nums[i]) << " " << INT_MAX << endl;
        if((nums[j]^nums[i])==INT_MAX){
            i++;j--;total++;
        }else{
            i++;total++;
        }
        //cout << i << " " << j << " " << total << endl;
    }
    if(i==j){
        total++;
    }
    cout << total << endl;

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