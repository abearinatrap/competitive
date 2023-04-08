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
    int h,t;
    cin >> h >> t;
    //h is eyes
    //t is number of teeth
    // two sapces in between eyes
    for(int i=0;i<h-1;i++){
        for(int b=0;b<2;++b){
            for(int j=0;j<h;j++){
                if(j==(h-1-i)){
                    cout << '/';
                }else{
                    cout << ' ';
                }
            }
            for(int j=0;j<h;j++){
                if(j==i){
                    cout << '\\';
                }else{
                    cout << ' ';
                }
            }
            if(b==0){
            cout << "  ";}
        }
        cout << endl;
    }
    for(int b=0;b<2;++b){
        for(int j=0;j<h;j++){
            if(j==0){
                cout << '/';
            }else{
                cout << '_';
            }
        }
        for(int j=0;j<h;j++){
            if(j==h-1){
                cout << '\\';
            }else{
                cout << '_';
            }
        }
        if(b==0){
            cout << "  ";}
    }
    cout << endl;
    for(int i=0;i<(h*4+2);++i){
        cout << ' ';
    }
    cout << endl;
    //h*4+2 - t*2
    int spac=((h*4+2) - (t*2))/2;
    for(int i=0;i<spac;++i){
        cout << ' ';
    }
    for(int i=0;i<t;++i){
        cout << "\\/";
    }
    for(int i=0;i<spac;++i){
        cout << ' ';
    }
    cout << endl;
    for(int i=0;i<spac;++i){
        cout << ' ';
    }
    for(int i=0;i<t;++i){
        cout << "/\\";
    }
    for(int i=0;i<spac;++i){
        cout << ' ';
    }
    cout << endl;
}

int main(){
    solve();
    return 0;
}
