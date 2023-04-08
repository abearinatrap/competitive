#include <iostream>
#include <vector>
#include <map>
#include <stack>
#include <queue>
#include <set>
#include <algorithm>
#include <cassert>
using namespace std;

int in(){
    int r;
    cin >> r;
    return r;
}

int func(int x, int a){
    return x/a + x%a;
}

void solve(){
    int l,r,a;
    cin >> l>> r >> a;
    int val,f;
    if(r-l+1<a){
        //range smaller than a
        int dif=r%a;
        val=r-(1+dif);
        if(val<l) val=l;
    }else{
        //want largest value that gives 
        int dif=r%a;
        val=r-(1+dif);
    }
    if(func(val,a)<func(r,a)) val=r;
    cout << func(val,a) << endl;
}

int main(){
    int repeat;
    cin >> repeat;
    while(repeat--){
        solve();
    }
    return 0;
}
