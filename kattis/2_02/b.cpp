#include <iostream>
#include <vector>
#include <map>
#include <stack>
#include <queue>
#include <set>
#include <algorithm>
#include <cassert>
#include <sstream>

using namespace std;

void solve(){
    int t,g=0,e=0;
    for(int i=0;i<4;++i){
        cin >> t;
        g+=t;
    }
    for(int i=0;i<4;++i){
        cin >> t;
        e+=t;
    }
    int w=g,l=e;
    
    if(w>l){
        cout << "Gunnar" <<endl;
    }else if(w<l){
        cout << "Emma" << endl;
    }else{
        cout << "Tie" << endl;
    }
}

int main(){
    solve();
    return 0;
}
