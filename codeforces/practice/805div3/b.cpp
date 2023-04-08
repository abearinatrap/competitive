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
    string word;
    std::cin.ignore();
    cin >> word;
    vector<char> mem(3,-1);
    int in=0;int end=word.size();
    int day=0;
    while(in<end){
        bool f=false;
        for(int i=0;i<3;++i){
            if(word[in]==mem[i]){
                in++;
                f=true;break;
            }else{
                if(mem[i]==0){
                    mem[i]=word[in++];
                    f=true;break;
                }
            }
        }
        if(!f){
            day++;
            mem[0]=mem[1]=mem[2]=0;
        }
        
    }
    cout << day << endl;
}

int main(){
    int repeat;
    cin >> repeat;
    while(repeat--){
        solve();
    }
    return 0;
}
