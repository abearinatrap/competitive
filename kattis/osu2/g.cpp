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
#define str string
#define all(a) a.begin(),a.end()
#define sz(a) ((int)a.size())
#define fo(i, n) for (int i = 0; i < n; ++i)
#define of(i, n) for (int i = n; i >= 0; --i)
#define rep(i, a, b) for (int i = a; i < b; ++i)
#define C(i) cin >> i

#define CLRS() cin.ignore(INT_MAX,'\n')

void solve(){
    vector<bool> r(26);
    vi d(26);
    int sum=0;
    while(true){
        str a;
        getline(cin, a);
        
        stringstream ss;
        int time;
        ss << a;
        ss >> time;
        if(time==-1){
            break;
        }
        if(size(a)<4){
            break;
        }
        str p, re;
        ss >> p >> re;
        int ind = p[0]-'A';
        if(r[ind]==false){
            if(re=="right"){
                sum += time;
                r[ind]=true;
            }else{
                d[ind]++;
            }
        }
    }
    int count=0;
    fo(i,26){
        if(r[i]){
            ++count;
            sum+=d[i]*20;
        }
    }
    cout << count << " " << sum << endl;
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    solve();
    return 0;
}


vi arr = {1, 5, 7, 10, 12};
int target = 5;
int left = 0;              // Left bound of the search range
int right = arr.size() - 1; // Right bound of the search range

while (left <= right) {
    int mid = left + (right - left) / 2; // Calculate the middle index

    if (arr[mid] == target) {
        return mid; // Element found, return its index
    } else if (arr[mid] < target) {
        left = mid + 1; // Adjust the left bound
    } else {
        right = mid - 1; // Adjust the right bound
    }
}