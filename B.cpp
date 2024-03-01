#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define fi first
#define se second
#define MOD 1000000007
const int MAXN = 4e5;
vector<ll> topo;
static ll in[1000];
ll dx[8] = {-1,0,0,1,-1,-1,1,1};
ll dy[8] = {0,-1,1,0,-1,1,-1,1};
static ll Hash,base = 131,k,n,a[MAXN] = {0,1,3,6,10,15},b[MAXN],dp[MAXN];
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    //freopen("ROBOT.INP","r",stdin);
    //freopen("ROBOT.OUT","w",stdout);
    static ll tt,xx,y,x,z,yy,d,j,l,r,lo,rr,i,res,m,ans;
    string st,ss,stt,sss,str,s;
    bool ok,b1;
    cin >> tt;
    while(tt--){
        cin >> n;
        if (n>=1000){
            ans = (n-1000)/15;
            n-=15*ans;
        }
        for (i = 1;i <= n;i++){
            dp[i] = 1e18;
            for (j = 1;j <= 5;j++)
            if (a[j]<=i)dp[i] = min(dp[i],dp[i-a[j]]+1);
        }
        cout << ans+dp[n] << '\n';
        ans = 0;
    }
    return (0^0)&(200+10);
}
/*
$ bobseesanna
b 10100000000
o  1000000000
b   100000000
s    10010000
e     1100000
e      100000
s       10000
a        1001
n         110
n          10
a           1
*/