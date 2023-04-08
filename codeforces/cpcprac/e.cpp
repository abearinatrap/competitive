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
    int n, q;
    cin >> n >> q;
    int h[n];
    int w[n];
    for(int i = 0; i < n; i++){
        cin >> h[i] >> w[i];
    }
    for(int i = 0; i < q; i++){
        long long sum = 0;
        int h1, h2, w1, w2;
        cin >> h1 >> w1 >> h2 >> w2; 
        for(int j = 0; j < n; j++){
            if((h[j] > h1) && (h[j] < h2) && (w[j] > w1) && (w[j] < w2)){
                sum += h[j] * w[j];
            }
        }
        cout << sum << endl;
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
