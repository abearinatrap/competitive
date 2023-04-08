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
    vector<int> squares{0,1,4,9,16,25,36,49,64,81,100,121,144,169,196,225,256,289,324,361,400,441,484,529,576,625,676,729,784,841,900,961,1024,1089,1156,1225,1296,1369,1444,1521,1600,1681,1764,1849,1936,2025,2116,2209,2304,2401,2500,2601,2704,2809,2916,3025,3136,3249,3364,3481,3600,3721,3844,3969,4096,4225,4356,4489,4624,4761,4900,5041,5184,5329,5476,5625,5776,5929,6084,6241,6400,6561,6724,6889,7056,7225,7396,7569,7744,7921,8100,8281,8464,8649,8836,9025,9216,9409,9604,9801,10000,10201,10404,10609,10816,11025,11236,11449,11664,11881,12100,12321,12544,12769,12996,13225,13456,13689,13924,14161,14400,14641,14884,15129,15376,15625,15876,16129,16384,16641,16900,17161,17424,17689,17956,18225,18496,18769,19044,19321,19600,19881,20164,20449};
    
    for(int inst=0;inst<repeat;++inst){
        int n;
        cin >> n;
        vector<int> output(n,-1);
        bool broke=false;
        for(int i=n-1;i>=0;--i){
            int num=*lower_bound(squares.begin(),squares.end(),i)-i;
            if(num>=n || n<0){
                broke=true;break;
            }
            //cout << num << " "<<i<< endl;
            while(num<n && output[num]==-1){
                output[num++]=i--;
            }
            --num;
            ++i;
            output[num]=i;
        }
        if(!broke){
            for(int i=0;i<n;++i){
                cout << output[i] << " ";
            }cout << endl;
        }else{
            cout << -1 <<endl;
        }
        
    }
    return 0;
}
