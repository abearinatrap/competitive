#include <iostream>
#include <vector>
#include <map>
#include <stack>
#include <queue>
#include <set>
#include <algorithm>
#include <cassert>
#include <sstream>
using namespace std;

void solve(){
    vector<int> d(26,0);
    string a;
    getline(cin, a);
    for(int i=0;i<a.length();++i){
        d[a[i]-'a']++;
    }
    getline(cin, a);
    for(int i=0;i<a.length();++i){
        d[a[i]-'a']++;
    }
    for(int i=0;i<26;++i){
        char c='a'+i;
        for(int j=d[i];j>0;--j){
            cout << c;
        }
    }
    cout << endl;
}

int main(){
    solve();
    return 0;
}
