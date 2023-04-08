#include <iostream>
#include <vector>
#include <map>
#include <stack>
#include <queue>
#include <set>
#include <algorithm>
#include <cassert>
#include <sstream>
using ll = long long;
using namespace std;

void solve(){
    int n;
    ll sum=0;
    cin >> n;
    int out=1;
    vector<int> num(n);
    for(int i=0;i<n;++i){
        cin >> num[i];
        sum+=num[i];
    }
    sort(num.begin(),num.end());
    sum-=num[n-1];
    if(sum<num[n-1]){
        cout << 1 << endl;
        return;
    }else{
        int l=n-2,r=n-1;
        ll lsum=num[l];
        ll rsum=num[n-1];
        ++out;
        while(lsum<rsum){
            ++out;
            lsum+=num[--l];
        }
    }
    cout << out <<endl;;
}

int main(){
    solve();
    return 0;
}
