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

vector<pii> solves(262144,make_pair(-1,-1));

const int masks[][9] = {{65536,16384,4096,1024,256,64,16,4,1}, {131072,32768,8192,2048,512,128,32,8,2},{196608,49152,12288,3072,768,192,48,12,3}};
const int wins[][3] = {{0,1,2}, {3,4,5}, {6,7,8}, {0,3,6}, {1,4,7}, {2,5,8} , {0,4,8}, {2,4,6}};

int beval(int board){
    //trusted eval

    //-1 X win
    // 0 not possible
    // 1 O win
    // 2 not done

    for(int i=0;i<2;++i){
        for(int j=0;j<8;++j){
            if(board&masks[i][wins[j][0]] && board&masks[i][wins[j][1]] && board&masks[i][wins[j][2]]){
                if(i==0){
                    return -1;
                }else if (i==1){
                    return 1;
                }  
            }
        }
    }
    return 2;
}

int ubeval(int board){
    //untrusted eval

    //-1 X win
    // 0 not possible
    // 1 O win
    // 2 not done
    vi cc(2), ww(2);
    for(int i=0;i<2;++i){
        for(int j=0;j<9;++j){
            if(board&masks[i][j]){
                cc[i]++;
            }else{
                //cout << j << " failed " << masks[i][j] << endl;
            }
        }
    }

    //cout <<"couunt: " << cc[0] << " " << cc[1] << endl;

    if(cc[0]-cc[1]>=2 || cc[1]-cc[0]>=2){
        return 0;
    }

    // limit is size of wins
    for(int i=0;i<2;++i){
        for(int j=0;j<8;++j){
            if(board&masks[i][wins[j][0]] && board&masks[i][wins[j][1]] && board&masks[i][wins[j][2]]){
                ww[i]++;
            }
        }
    }

    if(ww[0]>1 || ww[1]>1 || (ww[0]>=1 && ww[1]>=1)){
        return 0;
    }else if(ww[0]==1){
        return -1;
    }else if(ww[1]==1){
        return 1;
    }
    return 2;
}

int board_int(string board){
    int num=0;
    for(int i=0;i<9;++i){
        num = num << 2;
        if(board[i]=='X'){
            num++;
        }else if (board[i]=='O'){
            num+=2;
        }
    }
    return num;
}

pii operator+(pii lhs, const pii& rhs){
    lhs.first += rhs.first;
    lhs.second += rhs.second;
    return lhs;
}

pii fill(int board, bool turn){
    if(solves[board].first !=-1){
        return solves[board];
    }

    if(beval(board)==-1){
        solves[board] = make_pair(0,1);
        return solves[board];
    }else if(beval(board)==1){
        solves[board] = make_pair(1,0);
        return solves[board];
    }

    pii sum = {0,0};
    //sum wins from other boards
    if(turn){ // x 
        for(int i=0;i<9;++i){
            if(board|masks[0][i]!=board){
                sum = sum + fill(board, !turn);
            }
        }
    }else{ //o
        for(int i=0;i<9;++i){
            if(board|masks[1][i]!=board){
                sum = sum + fill(board, !turn);
            }
        }
    }
    return sum;
}

void solve(){
    string t;
    getline(cin,t);
    int board = board_int(t);
    cout << t <<": " << board << endl;
    cout << ubeval(board) << endl << endl;
}

int main(){
    fill(0,true);
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int repeat;
    cin >> repeat;
    CLRS();
    while(repeat--){
        solve();
    }
    return 0;
}