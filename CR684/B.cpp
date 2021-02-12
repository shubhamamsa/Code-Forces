#include<bits/stdc++.h>
#define mod 1000000007

using namespace std;

void subMain()	{
	long long n, k;
	cin >> n >> k;
	long long size = n*k;
	long long a[size+1];
	for(long long i=1;i<=size;i++)
		cin >> a[i];
	long long ans = 0;
	long long test = 0;
	for(long long i=size-n/2;i>=1&&test<k;i-=(n/2+1), test++)
		ans+=a[i];
	cout << ans;
}

int main()	{
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
	int t = 1;
	cin >> t;
	while(t--)	{
		subMain();
		cout << "\n";
	}	
	return 0;
}