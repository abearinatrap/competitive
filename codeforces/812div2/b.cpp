#include <iostream>
#include <vector>
#include <map>
#include <stack>
#include <queue>
#include <set>
#include <algorithm>
#include <cassert>
using namespace std;

int main(){
    int repeat;
    cin >> repeat;
    for(int inst=0;inst<repeat;++inst){
        int n;
        cin >> n;
        vector<int> d(n);
        for(int i=0;i<n;++i){
            cin >> d[i];
        }
        bool flip=false;
        bool win=true;
        for(int i=0;i<n-1;++i){
            if(flip){
                if(d[i]<d[i+1]){
                    win=false;
                }
            }
            if(d[i]>d[i+1]){
                flip=true;
            }
        }
        if(win){
            cout << "YES" <<endl;
        }else{
            cout << "NO" <<endl;
        }
        
    }
    return 0;
}
