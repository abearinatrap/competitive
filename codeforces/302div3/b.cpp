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
    int n,k;
    cin >> n >> k;
    vector<int> dict(26,0);
    vector<int> dict2(26,0);
    for(int i=0;i<n;++i){
        char c;
        cin >> c;
        if(c>96){
            dict[c-'a']++;
        }else{
            dict2[c-'A']++;
        }
    }
    int sum=0,diff=0;
    for(int i=0;i<26;++i){
        sum+=min(dict[i],dict2[i]);
        diff+=max(dict[i]-dict2[i],dict2[i]-dict[i])/2;
    }
    if(k>diff){
        sum+=diff;
    }else{
        sum+=k;
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
