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
    k=k%4;
    if(k!=0){
        int sum=(n+k)/4;
        sum+=n/4;
        if(sum==n/2){
            cout << "YES" << endl;
            // 4-k is starting good number -> a
            for(int i=1;i<=n;++i){
                
            }
            // every 4 is good b
        }
    }else{
        cout << "NO" <<endl;
    }
    // n/4 is number of good b
    // 4 8 12 
    // 1 5 9 13 
    // need a+k to be divisible by 4 or b to be divisible by 4
    cout << "ans" << endl;
}

int main(){
    int repeat;
    cin >> repeat;
    while(repeat--){
        solve();
    }
    return 0;
}
