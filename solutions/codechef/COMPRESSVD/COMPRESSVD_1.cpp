// DATE: 05/08/2022, 08:13:33
// PROBLEM NAME: Compress the Video
// PROBLEM URL: https://www.codechef.com/problems/COMPRESSVD
// PROBLEM DIFFICULTY RATTING: 940
// STATUS: accepted
// TIME: 0.01
// MEMORY: 5.3M

#include <bits/stdc++.h>
using namespace std;
 
 
/*
------------------------Input Checker----------------------------------
*/
 
long long readInt(long long l,long long r,char endd){
    long long x=0;
    int cnt=0;
    int fi=-1;
    bool is_neg=false;
    while(true){
        char g=getchar();
        if(g=='-'){
            assert(fi==-1);
            is_neg=true;
            continue;
        }
        if('0'<=g && g<='9'){
            x*=10;
            x+=g-'0';
            if(cnt==0){
                fi=g-'0';
            }
            cnt++;
            assert(fi!=0 || cnt==1);
            assert(fi!=0 || is_neg==false);
 
            assert(!(cnt>19 || ( cnt==19 && fi>1) ));
        } else if(g==endd){
            if(is_neg){
                x= -x;
            }
 
            if(!(l <= x && x <= r))
            {
                cerr << l << ' ' << r << ' ' << x << '\n';
                assert(1 == 0);
            }
 
            return x;
        } else {
            assert(false);
        }
    }
}
string readString(int l,int r,char endd){
    string ret="";
    int cnt=0;
    while(true){
        char g=getchar();
        assert(g!=-1);
        if(g==endd){
            break;
        }
        cnt++;
        ret+=g;
    }
    assert(l<=cnt && cnt<=r);
    return ret;
}
long long readIntSp(long long l,long long r){
    return readInt(l,r,' ');
}
long long readIntLn(long long l,long long r){
    return readInt(l,r,'\n');
}
string readStringLn(int l,int r){
    return readString(l,r,'\n');
}
string readStringSp(int l,int r){
    return readString(l,r,' ');
}
 
 
/*
------------------------Main code starts here----------------------------------
*/
 
const int MAX_T = 1e5;
const int MAX_N = 1e5;
const int MAX_SUM_LEN = 1e5;
 
#define fast ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)
#define ff first
#define ss second
#define mp make_pair
#define ll long long
#define rep(i,n) for(int i=0;i<n;i++)
#define rev(i,n) for(int i=n;i>=0;i--)
#define rep_a(i,a,n) for(int i=a;i<n;i++)
#define pb push_back
 
int sum_n = 0, sum_m = 0;
int max_n = 0, max_m = 0;
int yess = 0;
int nos = 0;
int total_ops = 0;
ll mod = 1000000007;
 
using ii = pair<ll,ll>;
 
void solve(){
    int n = readIntLn(1,1e5);
    sum_n += n;
    max_n = max(max_n, n);
 
    int a[n];
 
    rep(i,n){
        if(i<n-1) a[i] = readIntSp(1,1e6);
        else a[i] = readIntLn(1,1e6);
    }
 
    int curr = -1;
    int ans = 0;
    rep(i,n){
        if(a[i]!=curr){
            ans++;
            curr = a[i];
        }
    }
 
    cout<<ans<<'\n';
 
}
 
 
 
signed main()
{
 
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r" , stdin);
    freopen("output.txt", "w" , stdout);
    #endif
    fast;
    
    int t = 1;
    
    t = readIntLn(1,1000);
    
    for(int i=1;i<=t;i++)
    {    
       solve();
    }
   
    assert(getchar() == -1);
    assert(sum_n<=2e5);
 
    cerr<<"SUCCESS\n";
    cerr<<"Tests : " << t << '\n';
    cerr<<"Sum of lengths : " << sum_n <<" "<<sum_m<<'\n';
    // cerr<<"Maximum length : " << max_n <<'\n';
    // // cerr<<"Total operations : " << total_ops << '\n';
    // cerr<<"Answered yes : " << yess << '\n';
    // cerr<<"Answered no : " << nos << '\n';
 
    cerr << "Time : " << 1000 * ((double)clock()) / (double)CLOCKS_PER_SEC << "ms\n";
}

