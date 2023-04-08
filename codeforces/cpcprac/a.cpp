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
    int n;
    cin >> n;

    string s;
    cin >> s;
    if(n!=5) {
        cout << "NO" <<endl;
        return;
    }
    vector<int> dict(128);
    dict['T']++;
    dict['i']++;
    dict['m']++;
    dict['u']++;
    dict['r']++;
    for(int i=0;i<5;++i){
        if(--dict[s[i]]!=0){
            cout << "NO" <<endl;
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
