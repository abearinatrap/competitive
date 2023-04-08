#include <iostream>
#include <vector>
#include <map>
#include <stack>
#include <queue>
#include <set>
#include <algorithm>
#include <cassert>
#include <math.h>
using namespace std;

void solve(){
    string snum;
    while(getline(cin,snum)){
        int num=stoi(snum);
        int sum=1;
        int sqr=sqrt(num);
        for(int i=2;i<sqrt(num);++i){
            int a =num/i;

            if(a*i==num){
                sum+=i;
                sum+=a;
            }
        }
        if(sqr*sqr==num){
            sum+=sqr;
        }
        if(sum==num){
            cout << num << " perfect" << endl;
        }else if(sum>=num-2 && sum<=num+2){
            cout << num << " almost perfect" << endl;
        }else{
            cout << num << " not perfect" << endl;
        }
    }
}

int main(){
    solve();
    return 0;
}
