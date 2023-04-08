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
        int sum=0;
        vector<int> max_x(4);
        for(int i=0;i<n;++i){
            int x,y;
            cin >> x >> y;
            if(y==0){
                if(x<0){
                   
                    max_x[0]=max(max_x[0],-x);
                }else{
                    max_x[1]=max(max_x[1],x);
                }
            }else{
                if(y<0){
                    max_x[2]=max(max_x[2],-y);
                }else{
                    max_x[3]=max(max_x[3],y);
                }
            }
        }        
        for(auto c: max_x){
            sum+=c*2;
        }
        cout << sum <<endl;
    }
    return 0;
}
