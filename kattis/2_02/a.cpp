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
    string a,b,c;
    getline(cin, a);
    getline(cin, b);
    getline(cin, c);
    int d1=a.size()-1,d2=c.size()-1;
    if(d1<d2){
        int t=d1;
        d1=d2;
        d2=t;
    }
    if(b[0]=='+'){
        if(d1==d2){
            cout << '2';
            for(int i=0;i<d1;++i){
                cout << '0';
            }
            cout << endl;
        }else{
            cout << '1';
            for(int i=d1-1;i>=0;--i){
                if(i==d2){
                    cout << '1';
                }else{
                    cout << '0';
                }
            }
            cout << endl;
        }
    }else{
        cout << '1';
        d1+=d2;
        for(int i=0;i<d1;++i){
            cout << '0';
        }
        cout << endl;
    }
}

int main(){
    solve();
    return 0;
}
