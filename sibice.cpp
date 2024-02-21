#include <bits/stdc++.h>
using namespace std;


int main(){
    int n; cin >> n;
    int a,b;
    cin >> a >> b;
    for (int i=0;i<n;++i){
        int t;
        cin >> t;
        if (t>hypot(a,b)){
            cout << "NE" << endl;
        }else{
            cout << "DA" << endl;
        }
    }
    return 0;
}
