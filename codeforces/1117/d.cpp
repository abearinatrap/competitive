#include <iostream>
#include <vector>
#include <map>
#include <stack>
#include <queue>
#include <set>
#include <algorithm>
#include <cassert>
using namespace std;

void solve(){
    int count=0;
    vector<int> in;
    for(int i=0;i<5;++i){
        string input;
        cin >> input;
        if(input.find("FBI")!=string::npos) {
            in.push_back(i+1);
            count++;
        }
        
    }
    if(count==0){
        cout << "HE GOT AWAY!" << endl;
    }else{
        for(int i=0;i<in.size();++i){
            cout << in[i] << " ";
        }cout << endl;
    }
}

int main(){
    solve();
    return 0;
}
