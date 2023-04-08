#include <bits/stdc++.h>
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
    string meow;
    cin >> meow;
    int state=0;
    for(auto c:meow){
        switch (state){
            case 0:
                if (tolower(c)=='m') continue;
                if (tolower(c)=='e') {state++; continue;}
                else goto fail;
            break;
            case 1:
                if (tolower(c)=='e') continue;
                if (tolower(c)=='o') {state++; continue;}
                else goto fail;
            break;
            case 2:
                if (tolower(c)=='o') continue;
                if (tolower(c)=='w') {state++; continue;}
                else goto fail;
            break;
            case 3:
                if (tolower(c)=='w') {continue;}
                else goto fail;
            break;
        }
    }
    if(tolower(meow[n-1])!='w') goto fail;
    cout << "YES" << endl;
    return;
fail:
    cout << "NO" << endl;
}

int main(){
    int repeat;
    cin >> repeat;
    while(repeat--){
        solve();
    }
    return 0;
}
