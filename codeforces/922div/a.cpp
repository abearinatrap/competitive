#include <iostream>
#include <vector>
#include <map>
#include <stack>
#include <queue>
#include <set>
#include <algorithm>
#include <cassert>
using namespace std;

template <typename T>
int bst_in(vector<T> container,T search_val){
    auto num=lower_bound(container.begin(),container.end(),search_val);
    if(num-container.begin()==container.size()){
        //didn't find/too big
        return -1;
    }else{
        return num;
    }
}

template <typename T>
T bst_val(vector<T> container, T search_val){
    auto num=lower_bound(container.begin(),container.end(),search_val);
    if(num-container.begin()==container.size()){
        //didn't find/too big
        return NULL;
    }else{
        return *num;
    }
}

void solve(){
    int n,k;
    cin >> n >> k;
    int val=n/3;
    if(val*3==n){
        cout << n/3 << " " << n/3 << " " << n/3 << " " <<endl;
        return;
    }
    
}

int main(){
    int repeat;
    cin >> repeat;
    while(repeat--){
        solve();
    }
    return 0;
}