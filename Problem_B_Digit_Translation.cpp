#include <bits/stdc++.h>
using namespace std;

#define gc getchar_unlocked
#define fo(i, n) for (int i = 0; i < n; i++)
#define REP(i, a, b) for (int i = a; i < b; i++)
#define ll long long
#define si(x) scanf("%d", &x)
#define sl(x) scanf("%lld", &x)
#define ss(s) scanf("%s", s)
#define pi(x) printf("%d\n", x)
#define pl(x) printf("%lld\n", x)
#define ps(s) printf("%s\n", s)
#define deb(x) cout << #x << "=" << x << endl
#define deb2(x, y) cout << #x << "=" << x << "," << #y << "=" << y << endl
#define deb3(x, y, z) cout << #x << "=" << x << "," << #y << "=" << y << "," << #z << "=" << z << endl
#define pb push_back
#define mp make_pair
#define F first
#define S second
#define all(x) x.begin(), x.end()
#define clr(x) memset(x, 0, sizeof(x))
#define sortall(x) sort(all(x))
#define tr(it, a) for (auto it = a.begin(); it != a.end(); it++)
#define PI 3.1415926535897932384626

typedef pair<int, int> pii;
typedef pair<ll, ll> pl;
typedef vector<int> vi;
typedef vector<ll> vl;
typedef vector<pii> vpii;
typedef vector<pl> vpl;
typedef vector<vi> vvi;
typedef vector<vl> vvl;
typedef long long C;
typedef complex<C> Point;

#define X real()
#define Y imag()

int mpow(int base, int exp);
void dfs(int u, int par);

const int mod = 1'000'000'007;
const int N = 3e5, M = N;

vi g[N];
int a[N], ans[N];

void solve()
{
    string s;
    cin >> s;
    int n = s.size();
    // deb(n);
    vl dp1(n + 1), dp2(n + 1);
    vector<string> pos = {"three", "eight", "seven", "zero", "four", "five", "nine", "two", "one", "six"};
    // cout << pos[0].size() << endl;
    fo(i, n + 1)
    {
        if (i)
        {
            dp1[i] = dp1[i - 1] + 1;
            dp2[i] = dp2[i - 1];
            fo(j, 10)
            {
                // deb3(i, j, (int)pos[j].size());
                // if ((i) - (int)pos[j].size() >= 0)
                //     deb(s.substr((i) - (int)pos[j].size(), (int)pos[j].size()));

                if ((i) - (int)pos[j].size() >= 0 && s.substr((i) - (int)pos[j].size(), pos[j].size()) == pos[j])
                {
                    // cout << ;
                    // continue;
                    // cout << "HI";
                    // dp1[i] = min(dp1[i], dp1[i - (int)pos[j].size()] + 1);
                    if (dp1[i - 1] + 1 >= dp1[i - (int)pos[j].size()] + 1)
                    {
                        if (dp1[i - 1] + 1 == dp1[i - (int)pos[j].size()] + 1)
                        {
                            dp2[i] = (dp2[i] + dp2[i - (int)pos[j].size()]) % 9302023;
                        }
                        else
                        {
                            dp2[i] = dp2[i - (int)pos[j].size()];
                        }
                        // dp1[i] = dp1[i - (int)pos[j].size()] + 1;
                    }
                    dp1[i] = min(dp1[i], dp1[i - (int)pos[j].size()] + 1);
                }
            }
            // deb3(i, dp1[i], dp2[i]);
            // fo(j, 10)
            // {
            //     if ((i) - (int)pos[j].size() >= 0 && s.substr((i) - (int)pos[j].size(), pos[j].size()) == pos[j])
            //     {
            //         // cout << ;
            //         // continue;
            //         // cout << "HI";
            //         if (dp1[i - 1] == dp1[i - (int)pos[j].size()])
            //         {
            //             dp2[i] +=
            //         }
            //         dp1[i] = min(dp1[i], dp1[i - (int)pos[j].size()] + 1);
            //     }
            // }
        }
        else
        {
            dp1[i] = 0;
            dp2[i] = 1;
        }
    }
    for(auto c: dp1){
        cout << c << " ";
    }cout << endl;
    for(auto c: dp2){
        cout << c << " ";
    }cout << endl;

    cout << dp1[n] << endl;
    cout << dp2[n] << endl;
    return;
}

int main()
{
    ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
    srand(chrono::high_resolution_clock::now().time_since_epoch().count());

    int t = 1;
    //   cin >> t;
    while (t--)
    {
        solve();
    }

    return 0;
}

int mpow(int base, int exp)
{
    base %= mod;
    int result = 1;
    while (exp > 0)
    {
        if (exp & 1)
            result = ((ll)result * base) % mod;
        base = ((ll)base * base) % mod;
        exp >>= 1;
    }
    return result;
}

void ipgraph(int n, int m)
{
    int u, v;
    while (m--)
    {
        cin >> u >> v;
        u--, v--;
        g[u].pb(v);
        g[v].pb(u);
    }
}

void dfs(int u, int par)
{
    for (int v : g[u])
    {
        if (v == par)
            continue;
        dfs(v, u);
    }
}
