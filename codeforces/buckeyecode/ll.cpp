#include <bits/stdc++.h>
#define ll long long
#define fi first
#define se second
using namespace std;

int main() {
  ll n, k, q; cin >> n >> k >> q;

  vector<ll> prefix_b;
  vector<ll> prefix_c;
  vector<size_t> prefix_h;

  vector<bool> m(k, false);

  prefix_b.push_back(0x00);
  prefix_c.push_back(0);
  prefix_h.push_back(0);

  auto hash_string = hash<string>{};

  for (int i = 0; i < n; i++) {
    int x; cin >> x;

    prefix_b.push_back(prefix_b.back() ^ x);
    
    ll c = prefix_c.back();
    if (!m[x - 1]) {
      ++c;
    } else {
      --c;
    }
    ll h = prefix_h.back();
    h ^= hash_string(to_string(x));

    prefix_c.push_back(c);
    prefix_h.push_back(h);

    m[x - 1] = !m[x - 1];
  }



  for (ll i = 0; i < q; i++) {
    ll l, r; cin >> l >> r;

    ll b = prefix_b[r] ^ prefix_b[l-1];
    ll c = prefix_c[r] - prefix_c[l-1];
    size_t h = prefix_h[r] ^ prefix_h[l-1];

    if (c != 1 && c != -1) {
      cout << "0" << endl; continue;
    } 

    if (hash_string(to_string(b)) != h) {
      cout << "0" << endl; continue;
    }

    cout << b << endl;
  }
}