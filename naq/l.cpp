#include <iostream>
#include <vector>
#include <map>
#include <stack>
#include <queue>
#include <set>
#include <algorithm>
#include <cassert>
#include <sstream>
#include <utility>
using namespace std;

#define fi first
#define se second
#define ll long long

typedef pair<int, int> pii;
typedef pair<ll, ll> pll;
typedef pair<double, double> pdd;

int main() {
  int t, s; cin >> t >> s;
  // int s; cin >> s;

  pii pos = { s, 0 };
  int val = 0;
  double this_cell = (double) s;

  while (pos.fi >= pos.se) {
    val += pos.fi + 1 - pos.se;

    double up = (double) this_cell + 0.5;
    double up_left = (double) this_cell - 0.5;

    // cout << pos.fi << ", " << pos.se << endl;
    // cout << up << " or " << up_left << endl;
    
    if (up > s) {
      pos.fi--;
      this_cell = up_left;
    } else {
      this_cell = up;
    }

    pos.se++;

  }

  // cout << "final pos " << pos.fi << " " << pos.se << endl;
  // cout << "pre val " << val << endl; 

  val = 8*val - 4*s - 4*(pos.se - 1) - 7;

  int spider_sq = val;
  int taxi_sq = 2 * t * (t + 1) + 1;

  if (taxi_sq >= spider_sq) {
    cout << "1" << endl;
    return 0;
  }

  int d = __gcd(taxi_sq, spider_sq);
  taxi_sq /= d;
  spider_sq /= d;

  cout << taxi_sq << "/" << spider_sq << endl;

  return 0;

}