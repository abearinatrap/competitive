#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef pair<int,int> pii;
typedef vector<int> vi;
typedef vector<ll> vl;
typedef vector<vi> vvi;
typedef vector<vl> vvl;
typedef priority_queue<int> pqi;

#define fi first
#define se second
#define pb push_back
#define all(a) a.begin(),a.end()
#define sz(a) ((int)a.size())
#define fo(i, n) for (int i = 0; i < n; ++i)
#define of(i, n) for (int i = n; i >= 0; --i)
#define rep(i, a, b) for (int i = a; i < b; ++i)
#define C(i) cin >> i

#define CLR() cin.ignore(INT_MAX,'\n')

void reverseRow(vector<vector<int>>& data,
                int index)
{
    int cols = data[index].size();
    for(int i = 0; i < cols / 2; i++)
    {
        int temp = data[index][i];
        data[index][i] = data[index][cols - i - 1];
        data[index][cols - i - 1] = temp;
    }
}

void rotateMatrix180(vector<vector<int>>& data)
{
    int rows = data.size();
    int cols = data[0].size();
 
    if (rows % 2 != 0)
    {
         
        // If N is odd reverse the middle
        // row in the matrix
        reverseRow(data, data.size() / 2);
    }
     
    // Swap the value of matrix [i][j] with
    // [rows - i - 1][cols - j - 1] for half    
    // the rows size.
    for(int i = 0; i <= (rows/2) - 1; i++)
    {
        for(int j = 0; j < cols; j++)
        {
            int temp = data[i][j];
            data[i][j] = data[rows - i - 1][cols - j - 1];
            data[rows - i - 1][cols - j - 1] = temp;
        }
    }
}

void printMatrix(vector<vector<int>>& data)
{
    for(int i = 0; i < data.size(); i++)
    {
        for(int j = 0; j < data[i].size(); j++)
        {
            cout << data[i][j] << " ";
        }
        cout << endl;
    }
}
 
 

void solve(){
    ll n,k;
    cin >> n >> k;
    vvi m(n);
    fo(i,n){
        vi t(n);
        fo(j,n){
            cin >> t[j];
        }
        m[i]=t;
    }

    vvi r(m);
    rotateMatrix180(r);
    // printMatrix(r);
    // cout << endl;
    // printMatrix(m);
    ll wrong = 0;
    //cout << k << endl;
    fo(i,n){
        fo(j,n){
            if(r[i][j]!=m[i][j]){
                m[n-i-1][n-1-j] = m[i][j];
                r[i][j] = m[i][j];
                wrong++;
                //cout << i << " " << j << endl;
                if(wrong > k){
                    goto bad;
                }
            }
        }
    }


    if((k-wrong)%2 != 0){
        goto bad;
    }
    // printMatrix(r);
    // cout << endl;
    // printMatrix(m);
    cout << "YES" << endl;
    return;
bad:
    cout << "NO" << endl;
    return;
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int repeat;
    cin >> repeat;
    while(repeat--){
        solve();
    }
    return 0;
}
