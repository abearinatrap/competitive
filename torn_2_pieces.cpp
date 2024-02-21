#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef pair<int,int> pii;
typedef vector<int> vi;
typedef vector<ll> vl;
typedef vector<vi> vvi;
typedef vector<vl> vvl;
typedef priority_queue<int> pqi;
typedef string str;

#define fi first
#define se second
#define pb push_back
#define all(a) a.begin(),a.end()
#define sz(a) ((int)a.size())
#define fo(i, n) for (int i = 0; i < n; ++i)
#define of(i, n) for (int i = n; i >= 0; --i)
#define rep(i, a, b) for (int i = a; i < b; ++i)
#define in(i) int i; cin >> i
#define S(i) str i; cin >> i
#define L(i) str i; getline(cin, i)

#define CLRS() cin.ignore(INT_MAX,'\n')

void solve(){
    in(n);
    int s = 0;
    vvi p(n, vi());
    map<string,int> names;
    map<int, string> seman;
    fo(i,n){
        string l, word;
        getline(cin, l);
        stringstream ss(l);
        ss >> word;
        if (names.find(word) == names.end()){
            names[word] = s++;
            seman[s-1] = word;
        }
        int start = names[word];
        while(ss >> word){
            if (names.find(word) == names.end()){
                names[word] = s++;
                seman[s-1] = word;
            }
            p[start].pb(names[word]);
        }
    }
    cout << "here" << endl;
    //bfs

    set<int> visited;
    queue<pair<int,vi> > q;

    string l, a, b;
    getline(cin, l);
    stringstream ss(l);
    ss >> a >> b;
    int start = names[a], end = names[b];

    q.push({start,vi()});
    while(!q.empty()){
        pair<int, vi> a = q.front();
        q.pop();
        if(visited.find(a.fi) != visited.end()){
            continue;
        }
        for(auto c : p[a.fi]){
            if (c==end){
                for (auto j : a.se){
                    cout << seman[j] << " ";
                }
                cout << seman[c] << endl;
                goto end;
            }
            vi t(a.se);
            t.pb(c);
            q.push({c,t});
        }
    }
    cout << "no route found" << endl;
end:
    return;
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    solve();
    return 0;
}
