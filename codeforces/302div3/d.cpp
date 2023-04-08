#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

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
    int sum=0;
    for(int i=1;i<n-1;++i){
        if(s[i-1]!=s[i+1]){
            ++sum;
        }
    }
    cout << sum << endl;
}

int main(){
    int repeat;
    cin >> repeat;
    while(repeat--){
        solve();
    }
    return 0;
}
