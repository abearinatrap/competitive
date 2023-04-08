#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef pair<int,int> pii;
typedef vector<int> vi;
typedef vector<ll> vl;
typedef vector<vi> vvi;
typedef vector<vl> vvl;
typedef priority_queue<int> pqi;
typedef priority_queue<double> pqd;

#define fi first
#define se second
#define pb push_back
#define fo(i, n) for (int i = 0; i < n; i++)
#define rep(i, a, b) for (int i = a; i < b; i++)
#define C(i) cin >> i;

template <typename T>
int bst_in(vector<T> container,T search_val){
    auto num=lower_bound(container.begin(),container.end(),search_val);
    if(num-container.begin()==container.size()){
        //didn't find/too big
        return -1;
    }else{
        return num;
    }
}

template <typename T>
T bst_val(vector<T> container, T search_val){
    auto num=lower_bound(container.begin(),container.end(),search_val);
    if(num-container.begin()==container.size()){
        //didn't find/too big
        return NULL;
    }else{
        return *num;
    }
}

void solve(){
    double n;
    cin >> n;
    double sum2=0;
    double sum3=0;
    int num=0;
    priority_queue<double,vector<double>,greater<double>> g;
    cout << (n==-1) << endl;
    while(n != ((double)-1)){
        g.push(n);
        cin>>n;
    }
    cout << "Worst 3: " << g.top() << " ";
    g.pop();
    cout << g.top() << " ";
    g.pop();
    sum2+=g.top();
    cout << g.top() << " ";
    g.pop();
    cout << endl;
    while(!g.empty()){
        sum2+=g.top();
        sum3+=g.top();
        g.pop();
        num++;
    }
    cout << "Remove 2 " << setprecision(40) << sum2/(num+1) << endl;
    cout << "Remove 3 " << setprecision(40) << sum3/num << endl;
    cout << "2/3 avg " << setprecision(40) << (sum2/(num+1) + sum3/num)/2 << endl;

}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    solve();
    return 0;
}
