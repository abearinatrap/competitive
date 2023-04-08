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
    int size;
    cin >> size;
    int color1[size];
    int color2[size];
    for(int i = 0; i < size; i++){
        char c;
        cin >> c;
        if(c == 'R'){
            color1[i] = 0;
        } else {
            color1[i] = 1;
        }
    }
    for(int i = 0; i < size; i++){
        char c;
        cin >> c;
        if(c == 'R'){
            color2[i] = 0;
        } else {
            color2[i] = 1;
        }
    }
    for(int i = 0; i < size; i++){
        if(color1[i] != color2[i]){
            cout << "NO" << endl;
            return;
        }
    }
    cout << "YES" << endl;
}

int main(){
    int repeat;
    cin >> repeat;
    while(repeat--){
        solve();
    }
    return 0;
}
