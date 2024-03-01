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
static ll Hash,base = 131,k,n,a[MAXN],b[MAXN],dp[MAXN];
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
        for (i = 1;i <= n;i++)
        cin >> a[i];
        sort(a+1,a+1+n);
        cout << abs(a[1]-a[n])+abs(a[n]-a[2])+abs(a[2]-a[n-1])+abs(a[n-1]-a[1]) << '\n';
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