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
    string s;
    vector<long long int> out(1);
    cin >> n >> s;
    int k=0,l=0,r=n-1;
    while(l<r){
        if(s[l]=='L'){
            out.push_back(n-1-2*l);
            out[0]+=l;
        }else{
            out[0]+=n-1-l;
        }
        l++;
        if(s[r]=='R'){
            out.push_back(2*r-n+1);
            out[0]+=n-r-1;
        }else{
            out[0]+=r;
        }
        r--;
    }
    if(l==r){
        out[0]+=n/2;
    }
    //cout << out[0] << " ";
    for(int i=1;i<out.size();++i){
        out[i]+=out[i-1];
        cout << out[i] << " ";
    }
    for(int i=out.size()-1;i<n;++i){
        cout <<out[out.size()-1] << " ";
    }
    cout << endl;
}

int main(){
    int repeat;
    cin >> repeat;
    while(repeat--){
        solve();
    }
    return 0;
}
