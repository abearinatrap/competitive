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
    int n,nb;
    vector<int> h(100002,201),b(100002,201);
    cin >> n;
    int temp;
    //keep number of packs so far yet at certain sum of buns. if not valid sum is 201 which is larger than total number of packs
    h[0]=b[0]=0;
    for(int i=0;i<n;++i){
        cin >> temp;
        for(int i=h.size()-1-temp;i>=0;--i){
            //set to lowest value always on entering
            if(h[i]<h[i+temp]){
                h[i+temp]=h[i]+1;
            }
        }
    }
    cin >> nb;
    for(int i=0;i<nb;++i){
        cin >> temp;
        for(int i=b.size()-1-temp;i>=0;--i){
            if(b[i]<b[i+temp]){
                b[i+temp]=b[i]+1;
            }
        }
    }
    int minv=201;
    for(int i=1;i<h.size();++i){
        minv=min(minv,h[i]+b[i]);
    }
    if(minv>200){
        cout << "impossible" << endl;
    }else{
        cout << minv << endl;
    }
}


int main(){
    solve();
    return 0;
}
