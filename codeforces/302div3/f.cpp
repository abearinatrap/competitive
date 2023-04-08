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

#define fi first
#define se second

vector<pair<int,vector<int>>> dict;

pair<int,vector<int>> countSum(string s) {
    pair<int,vector<int>> retval={0,vector<int>(26)};
    retval.fi=s.size();
    for(auto c:s){
        retval.se[c-'a']++;
    }
    return retval;
}

int sum=0;

void solve(int r){
    string s;
    cin >> s;
    pair<int,vector<int>> next = countSum(s);
    int a = 1;
    int curr=0;
    cout << "r: "<<r<<endl;
    for(auto s:dict){
        curr++;
        int cd=0;

        if(s.fi+next.fi&a-1){
            cout <<curr<< "leave not odd sum\n" << endl;
            goto skip;
        }

        for(int i=0;i<26;++i){
            if( min(s.se[i],next.se[i]) == 0){
                ++cd;
            }
        }
        if(cd!=25){
            cout<<curr <<" " << cd <<" leave not 25 diff\n" << endl;
            goto skip;
        }
        
        for(int i=0;i<26;++i){
            if(((s.se[i]^next.se[i])&a)-1){
                cout<<curr << "leave not odd sum char\n" << endl;
                goto skip;
            }
        }

        cout << curr << "Add one fits\n" << endl;
        sum++;
skip:
        curr=curr;
    }
    dict.push_back(next);
}



int main(){
    int repeat;
    cin >> repeat;
    --repeat;
    string s;
    cin >> s;
    dict.push_back(countSum(s));
    while(repeat--){
        solve(repeat);
    }
    cout << sum << endl;
    return 0;
}
