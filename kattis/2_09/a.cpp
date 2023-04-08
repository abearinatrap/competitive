#include <iostream>
#include <vector>
#include <map>
#include <stack>
#include <queue>
#include <set>
#include <algorithm>
#include <cassert>
#include <sstream>
#include "bits/stdc++.h"    
using namespace std;

void solve(){
    string a,b;
    getline(cin,a);
    getline(cin,b);
    for(int i=0;i<a.size();++i){
        int cval;
        if(i%2==1){
            cval = (a[i] + (b[i]- 'A'));
            if(cval>'Z'){
                cval-=26;
            }
        }else{
            cval = (a[i] - (b[i] - 'A'));
            if(cval<'A'){
                cval+=26;
            }
        }
        a[i]=cval;
    }
    cout <<a<< endl;
}

int main(){
    solve();
    return 0;
}
