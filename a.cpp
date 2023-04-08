#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin >> t;
    for(int a=0;a<t;++a){
        int n,h,m,mint=INT_MAX,z,x;
        cin >> n >> h >> m;
        //cout << n <<endl;
        for(int b=0;b<n;++b){
            cin >>z>>x;
            int t=(z-h);
            if(t<0){
              t+=24;
            }  
            int y=(x-m);
            if(y<0){
                y=60+y;
                t--;
            }
            if(t<0){
                t=23;
            }
            y+=t*60;
            mint=min(mint,y);
        }
        cout << mint <<endl;
    }
    return 0;
}
