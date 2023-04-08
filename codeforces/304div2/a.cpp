#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef pair<int,int> pii;
typedef vector<int> vi;
typedef vector<ll> vl;
typedef vector<vi> vvi;
typedef vector<vl> vvl;
typedef priority_queue<int> pqi;

#define fi first
#define se second
#define pb push_back
#define fo(i, n) for (int i = 0; i < n; i++)
#define rep(i, a, b) for (int i = a; i < b; i++)
#define C(i) cin >> i

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
    int n; cin >> n;
    vector<string> dict(2*n-2);
    int dsize=2*n-2;
    fo(i,2*n-2){
        cin >> dict[i];
    }

    sort(dict.begin(),dict.end(),[](string a, string b){
        return a.size()<b.size();
    });

    for(int i=0;i<dsize-1;++i){
        if(dict[i].size()==dict[i+1].size()){
            if(dict[i]==dict[i+1]){
                continue;
            }
            reverse(dict[i].begin(),dict[i].end());
            if(dict[i]!=dict[i+1]){
                goto fail;
            }
        }
    }

    cout << "YES" << endl;
    return;
fail:
    cout << "NO" << endl;
    return;
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int repeat;
    cin >> repeat;
    while(repeat--){
        solve();
    }
    return 0;
}
