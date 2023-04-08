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
    // 1 step, 2 options
    // 2 step, 4
    int n;
    cin >> n;
    
} 

void susm(string in, int* xr, int* yr){
    int y=0,x=0;
    for(auto c: in){
        if(c=='u') y--;
        else if(c=='d') y++;
        else if(c=='r') x++;
        else if(c=='l') x--;
    }
    *xr=x;
    *yr=y;
}

int main(){
    solve();
    return 0;
}
