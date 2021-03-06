#include <vector>
#include <list>
#include <map>
#include <set>
#include <deque>
#include <queue>
#include <stack>
#include <bitset>
#include <algorithm>
#include <functional>
#include <numeric>
#include <utility>
#include <sstream>
#include <iostream>
#include <iomanip>
#include <cstdio>
#include <cmath>
#include <cstdlib>
#include <ctime>
#include <cstring>
#include <climits>
#include <stdlib.h>
using namespace std;
#define REP(i,n) for(int i=0; i<n; i++)
#define FOR(i,st,end) for(int i=st;i<end;i++)
#define db(x) cout << (#x) << " = " << x << endl;
#define mp make_pair
#define pb push_back
int arr[101];
int dp[101][101];
int csum(int a,int b){
int sum=0;
FOR(i,a,b+1){
sum=(sum+arr[i]);
sum%=100;
}
return sum;
}
int solve(int a,int b){
if(dp[a][b]!=-1)
return dp[a][b];
if(a==b)
return 0;
int ret=dp[a][b];
for(int k=a;k+1<=b;k++){
int temp=solve(a,k)+solve(k+1,b)+csum(a,k)*csum(k+1,b);
if(ret==-1||temp<ret)
ret=temp;
}
return (dp[a][b]=ret);
}
int main(){
int n;
while(cin>>n){
FOR(i,1,n+1){//considering 1 based array
scanf("%d",&arr[i]);
}
memset(dp,-1,sizeof dp);
printf("%d\n",solve(1,n));
}
}
