#include<bits/stdc++.h>
#define mod 1000000007

using namespace std;

void subMain()	{
	long long n, m;
	cin >> n >> m;
	long long k[n];
	long long c[m];
	long long sum = 0;
	for(long long i=0;i<n;i++)
		cin >> k[i];
	for(long long i=0;i<m;i++)
		cin >> c[i];
	sort(k, k+n, greater<long long>());
	long long l = 0;
	for(long long i=0;i<n;i++)	{
		if(k[i] > l)	{
			sum+=c[l++];
		}
		else
			sum+=c[k[i]-1];
	}
	cout << sum;
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