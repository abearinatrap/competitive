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

void solve(){
    int x, y, x1, y1, x2, y2;
    cin >> x >> y >> x1 >> y1 >> x2 >> y2;
    float d = 0;
    if (x > x1 and x < x2 and y > y2) {
        d = y - y2;
    } else if (x > x2 and y > y1 and y < y2) {
        d = x - x2;
    } else if (x > x1 and x < x2 and y < y1) {
        d = y1 - y;
    } else if (x < x1 and y > y1 and y < y2) {
        d = x1 - x;
    } else if (x > x2 and y > y2) {
        d = hypot(x - x2, y - y2);
    } else if (x > x2 and y < y1) {
        d = hypot(x - x2, y1 - y);
    } else if (x < x1 and y < y1) {
        d = hypot(x1 - x, y1 - y);
    } else if (x < x1 and y > y2) {
        d = hypot(x1 - x, y - y2);
    }
    cout << d << endl;
    return;
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    solve();
    return 0;
}
