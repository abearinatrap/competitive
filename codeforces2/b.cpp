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

vector<int> primes(2e5+1);
int nn = 237272;
void SieveOfEratosthenes(int n)
{
    // Create a boolean array "prime[0..n]" and initialize
    // all entries it as true. A value in prime[i] will
    // finally be false if i is Not a prime, else true.
    vector<bool> prime(n+1,true);
 
    for (int p=2; p*p<=n; p++)
    {
        // If prime[p] is not changed, then it is a prime
        if (prime[p] == true)
        {
            // Update all multiples of p
            for (int i=p*2; i<=n; i += p)
                prime[i] = false;
        }
    }
    int ca = 0;
    // Print all prime numbers
    for (int p=5; p<=n; p++)
       if (prime[p]){
            primes[ca++] = p;
       }
}

void solve(){
    in(n);
    --n;
    fo(i,n){
        cout << primes[i] << " ";
    }
    cout << primes[n+1] << endl;
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    SieveOfEratosthenes(nn);
    int repeat;
    cin >> repeat;
    while(repeat--){
        solve();
    }
    return 0;
}
