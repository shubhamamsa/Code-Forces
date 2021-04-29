#include<bits/stdc++.h>
#define mod 1000000007

using namespace std;

long long __gcd(long long a , long long b)
{
   if(b==0) return a;
   a%=b;
   return __gcd(b,a);
}

void subMain()	{
	long long n, q;
	cin >> n >> q;
	long long a[n];
	for(int i=0;i<n;i++)
		cin >> a[i];
	long long prod = a[0], lcm, gcd = a[0];
	for(int i=1;i<n;i++)	{
		prod *= a[i];
		gcd = __gcd(gcd, a[i]);
	}
	lcm = prod/gcd;
	int i, x;
	while(q--)	{
		cin >> i >> x;
		i--;
		prod *= x;
		long long tempgcd = __gcd(lcm, x);
		lcm = lcm*x/tempgcd;
		cout << prod/lcm << "\n";
	}	
}

int main()	{
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
	int t = 1;
	//cin >> t;
	while(t--)	{
		subMain();
		cout << "\n";
	}	
	return 0;
}