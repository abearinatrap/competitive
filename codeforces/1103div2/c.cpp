#include <iostream>
#include <vector>
#include <map>
#include <stack>
#include <queue>
#include <set>
#include <list>
#include <algorithm>
#include <cassert>
using namespace std;

int pos(int n){
    if (n<0) {
        return n*-1;
    } return n;
}

void solve(){
    int n;
    cin >> n;
    long long sum=0;
    vector<int> cups(n);
    for(int i=0;i<n;++i){
        cin >> cups[i];
        sum+=cups[i];
    }
    int avg=sum/n;
    cout << avg << endl;
    list<pair<int,int> > surp;
    int cost=0;
    for(int i=0;i<n;++i){
        cups[i]-=avg;
        if(cups[i]>0){
            surp.push_back({cups[i],i});
            cups[i]=0;
        }
    }
    for(int i=0;i<n;++i){
        while(cups[i]<0){
            cout << cost << " ";
            if(surp.front().second<i){
                int chunk=cups[i]+surp.front().second;
                if(chunk>0){
                    surp.front().first=chunk;
                    cost+=(0-cups[i])*(i-surp.front().second);
                    cups[i]=0;
                }else{
                    cost+=surp.front().first*(i-surp.front().second);
                    cups[i]+=surp.front().first;
                    surp.pop_front();
                }
            }else{
                int chunk=cups[i]+surp.back().second;
                if(chunk>0){
                    surp.back().first=chunk;
                    cost+=(0-cups[i])*(i-(n-surp.back().second));
                    cups[i]=0;
                }else{
                    cost+=surp.back().first*(i-(n-surp.back().second));
                    cups[i]+=surp.back().first;
                    surp.pop_back();
                }
            }
        }
    }
    cout << cost << endl;
}

int main(){
    solve();
    return 0;
}