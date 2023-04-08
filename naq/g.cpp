#include <iostream>
#include <vector>
#include <map>
#include <stack>
#include <queue>
#include <set>
#include <algorithm>
#include <cassert>
#include <sstream>
#include <utility>

#define ll long long;
using namespace std;

const int mod=1000000007;

void solve(){
    // either part of cycle or dependent on cycle
    int n;
    cin >> n;
    vector<int> d(n);
    for(int i=0;i<n;++i){
        cin >> d[i];
        --d[i];
    }

    map<int, int > p2p;
    //first = items in cycle, second = dependents of cycle
    vector<int> cdp;
    set<int> visited;

    int x=0;
    while(visited.size()<n && x<n){
        int i=x;
        if(visited.find(i)!=visited.end()) {
            ++x;
            continue;
        }
        int j=x;
        vector<int> curr = {i};
        bool leave=false;
        visited.insert(i);
        do{

            curr.push_back(i=d[i]);
            j=d[d[j]];
            if(visited.find(i)!=visited.end()){
                if(i==j){break;}
                //direct all before to cycle found, and increase value of dependents
                int cv = p2p[i];
                if(cv<0){
                    cv*=-1;
                }
                --cv;
                for(int a=0;a<curr.size();++a){
                    p2p[curr[a]] = p2p[i];
                    cdp[cv]++;
                }
                leave=true;
                break;
            }
            visited.insert(i);
        }while(i!=j);
        if(leave) {++x; continue;}
        j=x;
        while(i!=j){
            curr.push_back(i=d[i]);
            visited.insert(i);
            j=d[j];
        }


        //i==j==start of loop
        //if curr[0] == j, in loop whole time
        //else started out of loop
        if(curr[0]==j){
            cdp.push_back(0);
            for(auto c:curr){
                p2p[c] = (int)cdp.size();
            }
        }else{
            int nl=0;
            int cv;
            int found=false;
            int stp;
            for(int a=0;a<curr.size();++a){
                if(curr[a]==i && !found) {
                    found=true;
                    stp=a;
                    cdp.push_back(nl);
                    cv=(int)cdp.size();
                }
                if(found){
                    p2p[curr[a]] = cv;
                }else{
                    nl++;
                }
            }
            cv*=-1;
            for(int a=0;a<stp;++a){
                p2p[curr[a]] = cv;
            }
        }
        ++x;
    }



    long long sum=1;
    for(int i=0;i<cdp.size();++i){
        cdp[i]+=2;
        sum*=cdp[i];    
    }

    sum%=mod;

    cout << sum-1 << endl;
    
}

int main(){
    solve();
    return 0;
}
