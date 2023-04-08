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
    priority_queue<int> s;
    ll sum=0;
    for(int i=0;i<n;++i){
        int a;
        cin >> a;
        if(a==0){
            if(!s.empty()){
                sum+=s.top();
                s.pop();
            }
        }else {
            s.push(a);
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
