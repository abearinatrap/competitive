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

#define CLRS() cin.ignore(INT_MAX,'\n')

void solve(){
    int n; C(n);
    vi ao(n), at(n);
    int f=-1,b=-1;
    fo(i,n){
        C(ao[i]);
    }
    fo(i,n){
        C(at[i]);
        if(at[i]!=ao[i]){
            if(f<0) f=i;
            b=i;
        }
    }

    if(f!=-1){
        while(f>0 && at[f]>=at[f-1]){
            --f;
        }
        while(b<n && at[b-1]<=at[b]){
            ++b;
        }
        cout << f + 1 << " " << b << endl;
        return; 
    }

    cout << "second part" << endl;

    int max = 1, len = 1, maxIndex = 0;
     
    // traverse the array from the 2nd element
    for (int i=1; i<n; i++)
    {
        // if current element if greater than previous
        // element, then this element helps in building
        // up the previous increasing subarray encountered
        // so far
        if (at[i] > at[i-1])
            len++;
        else
        {
            // check if 'max' length is less than the length
            // of the current increasing subarray. If true,
            // then update 'max'
            if (max < len)   
            {
                max = len;
                 
                // index assign the starting index of
                // longest increasing contiguous subarray.  
                maxIndex = i - max;
            }
                 
            // reset 'len' to 1 as from this element
            // again the length of the new increasing
            // subarray is being calculated   
            len = 1;   
        }   
    }
     
    // comparing the length of the last
    // increasing subarray with 'max'
    if (max < len)
    {
        max = len;
        maxIndex = n - max;
    }

    if(f>=maxIndex){
        cout << maxIndex+1 << " " << max+maxIndex << endl;
    }
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
