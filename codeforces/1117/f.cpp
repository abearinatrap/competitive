#include <iostream>
#include <vector>
#include <map>
#include <stack>
#include <queue>
#include <set>
#include <algorithm>
#include <cassert>
using namespace std;

void solve(){
    int n;
    cin >> n;
    vector<vector<int>> d;
    for(int i=0;i<n;++i){
        vector<int> temp(n);
        for(int j=0;j<n;++j){
            cin >> temp[j];
        }
        d.push_back(temp);
    }
    vector<int> out(n);

    
    cout << "ans" << endl;
}

int main(){
    solve();
    return 0;
}
