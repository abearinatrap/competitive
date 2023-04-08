#include <iostream>
#include <vector>
#include <map>
#include <stack>
#include <queue>
#include <set>
#include <algorithm>
#include <cassert>
#include <sstream>

#define ll long long;
using namespace std;

void solve(){
    int n;
    cin >> n;
    int r=n%4;
    int s=n/4;
    cout << s;
    if(r==0){
        cout << ".0" <<endl;
    }else if(r==1){
        cout << ".25" <<endl;
    }else if(r==2){
        cout << ".50" <<endl;
    }else{
        cout << ".75" <<endl;
    }
}

int main(){
    solve();
    return 0;
}
