#include<bits/stdc++.h>
#define mod 1000000007

using namespace std;

long long fact(long long n)	{
	long long f = 1;
	for(long long i=1;i<=n;i++)
		f*=i;
	return f;
}

long long comb(long long n, long long r)	{
	return fact(n)/(fact(r)*fact(n-r));
}

void subMain()	{
	long long n;
	cin >> n;
	long long choose = comb(n, n/2)/2;
	cout << choose*fact(n/2-1)*fact(n/2-1);
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