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

vi fib = {1,1,2,3,5,8,13,21,34,55,89,144,233,377,610,987,1597,2584,4181,6765,10946,17711,28657,46368,75025,121393,196418,317811,514229,832040,1346269,2178309,3524578,5702887,9227465,14930352,24157817,39088169,63245986,102334155,165580141,267914296,433494437,701408733,1134903170,1836311903/*,2971215073*/};

void solve(){
    int n, x, y;
    cin >> n >> x >> y;
    int ax = fib[n], ay = fib[n+1];
    while(n-1){
        int c = ay-ax;
        //cout << c << ": c" << endl;
        if(y>c && y <= ay-c){
            cout << "NO" << endl;
            return;
        }
        if(y>ay-c){
            y-=(ay-c);
        }else{

        }
        int t=x;
        x=y;y=t;
        n--;
        ax = fib[n], ay = fib[n+1];
    }
    cout << "YES" << endl;
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
