#include <iostream>
#include <vector>
#include <map>
#include <stack>
#include <queue>
#include <set>
#include <algorithm>
#include <cassert>
using namespace std;

int findp(map<int,vector<int>>& stations, int start, int find){
    if(stations.find(find)==stations.end()) return -1;
    if(lower_bound(stations[find].begin(),stations[find].end(),start)!=stations[find].end()){
        return *lower_bound(stations[find].begin(),stations[find].end(),start);
    }
    return -1;
}

void solve(){
    cin.ignore(2);
    int n,k;
    cin >> n >> k;
    int input;
    map<int,vector<int>> dict;
    for(int i=0;i<n;++i){
        cin >> input;
        if(dict.find(input)==dict.end()){
            dict[input]={i};
        }else{
            dict[input].push_back(i);
        }
    }

    for(int i=0;i<k;++i){
        int a,b;
        cin >> a >> b;
        int x=findp(dict,0,a);
        if(x!=-1){
            int y=findp(dict,x,b);
            if(y!=-1){
                cout << "YES" << endl;
            }else{
                cout << "NO" <<endl;
            }
        }else{
            cout << "NO" << endl;
        }
        
    }
}

int main(){
    ios_base::sync_with_stdio(0); cin.tie(0);
    int repeat;
    cin >> repeat;
    while(repeat--){
        solve();
    }
    return 0;
}
