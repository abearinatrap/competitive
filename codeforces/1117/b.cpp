#include <iostream>
#include <vector>
#include <map>
#include <stack>
#include <queue>
#include <set>
#include <algorithm>
#include <cassert>
using namespace std;

long long int solve(){
    int g;
    cin >> g;
    long long int a;
    long long int out=0;
    for(int i=0;i<g;++i){
        cin >> a;
        out=out ^ a;
    }
    return out;
}

int main(){
    int repeat;
    cin >> repeat;
    int a=1;
    while(repeat--){
        cout << "Case #"<<a++<<": "<<solve() << endl;
    }
    return 0;
}
