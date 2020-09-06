#include<bits/stdc++.h>
#define mod 1000000007

using namespace std;

void subMain()	{
	long long n;
	cin >> n;
	long long a[n];
	long long count = 0;
	for(int i=0;i<n;i++)
		cin >> a[i];
	for(int i=0;i<n-1;i++)	{
		if(a[i] < 0)	{
			count+=abs(a[i]);
			a[n-1]+=a[i];
		}
		else
			a[i+1] += a[i];
	}
	cout << count;
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