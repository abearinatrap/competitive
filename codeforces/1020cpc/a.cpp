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
    string in;
    cin >> in;
    bool d=false;
    int out=in.size();
    cout << in.size() << endl;
    return;
    if(in[0]=='1') {
        for(int i=1;i<in.size();++i){
            if(in[i]!=0){
                cout << out <<endl;
                return;
            }
            d=true;
        }
        if (d){
            cout << out-1 << endl;
            return;
        }
        
    }
    cout << out << endl;
}

int main(){
    int repeat;
    cin >> repeat;
    while(repeat--){
        solve();
    }
    return 0;
}
