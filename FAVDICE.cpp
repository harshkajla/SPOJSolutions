#include <bits/stdc++.h>
#define mod 1000000007
#define rep(i,n) for(int i=0; i<n; i++)
#define reps(i,a,b) for(int i=a;i<=b;i++)
#define s(t) scanf("%d",&t)
#define p(t) printf("%d\n",t)
#define mp make_pair
#define pb push_back
#define gtc getchar()
typedef long long ll;
using namespace std;
int read_int()
{
    register int noRead=0,isneg=0;
    register char p=gtc;
    for(;p<48 || p>57;p=gtc){if(p=='-') isneg=1;}
    while(p>47 && p<58){ noRead = (noRead << 3) + (noRead << 1) + (p - '0');p=gtc;}
    if(isneg) noRead = -noRead;
    return noRead;
}
int main()
{
	int t,n;
	double ans;
	
	s(t);
	
	while(t--)
	{
		s(n);
		
		ans=0;
		for(int i=1;i<=n;i++)
		{
			ans+=n/(i+0.0);
		}
		
		printf("%.2lf\n",ans);
	}
	return 0;
}
