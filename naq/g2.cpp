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

void solve(){
    // either part of cycle or dependent on cycle
    int n;
    vector<int> d(n);
    cin >> n;
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
        for(auto c: visited){
            cout << c << " ";
        }cout << endl;
        cout << "start" << x<< endl;
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
            cout << i << "| " << j <<endl;
            if(visited.find(i)!=visited.end()){
                if(i==j){break;}
                cout << "in here" << endl;
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
        cout << "pas first" << endl;
        j=x;
        while(i!=j){
            cout << i <<" " << j << endl;
            curr.push_back(i=d[i]);
            visited.insert(i);
            j=d[j];
        }

        cout << "cycle found" << endl;
        for(auto a : curr){
            cout << a << " ";
        }cout << endl;

        //i==j==start of loop
        //if curr[0] == j, in loop whole time
        //else started out of loop
        if(curr[0]==j){
            cout << "ddd" << endl;
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
                    cout << curr[a] << " " <<stp << " "<< nl << " " << endl;
                    cdp.push_back(nl);
                    cv=(int)cdp.size();
                }
                if(found){
                    p2p[curr[a]] = cv;
                }else{
                    nl++;
                }
            }
            cout << "out" << endl;
            cv*=-1;
            for(int a=0;a<stp;++a){
                p2p[curr[a]] = cv;
                cout << curr[a] << " " << cv << endl;
            }
        }
        cout << "yo" << endl;
        ++x;
    }
    cout << "done ddd"<<endl;

    for(auto a = p2p.begin();a!=p2p.end();++a){
        cout << a->first << " " << a->second << endl;
    }
    cout << endl;
    for(auto a : cdp){
        cout << a << endl;
    }

    cout << endl;

    cout << "NOW DOING OUTPUT LOGIC" << endl;
    for(int i=0;i<cdp.size();++i){
        cdp[i]+=2;
    }

    ll sum=1;
    sum
}

int main(){
    solve();
    return 0;
}
