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

int digitSumInRange(int n) {
    if (n<10)
        return n*(n+1)/2;
    int digit = log10(n)+1;
    int d = digit-1; 
    
    int *place = new int[d+1]; 
    place[0] = 0;
    place[1] = 45;

    for (int i=2; i<=d; i++)
        place[i] = place[i-1]*10 + 45*ceil(pow(10,i-1));
    int power = ceil(pow(10, d));
    int msd = n/power;
    return msd*place[d] + (msd*(msd-1)/2)*power + msd*(1+n%power) + digitSumInRange(n%power);
}

void solve(){
    in(n);
    cout << digitSumInRange(n) << endl;
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