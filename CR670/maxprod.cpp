#include<bits/stdc++.h>
#define mod 1000000007

using namespace std;

void subMain()	{
	int n;
	cin >> n;
	long long a[n];
	for(int i=0;i<n;i++)
		cin >> a[i];
	sort(a, a+n);
	long long maxprod = 1, curprod = 1;
	curprod = a[n-1]*a[n-2]*a[n-3]*a[n-4]*a[n-5];
	maxprod = curprod;
	curprod = a[n-1]*a[n-2]*a[n-3]*a[0]*a[1];
	if(curprod > maxprod)
		maxprod = curprod;
	curprod = a[n-1]*a[0]*a[1]*a[2]*a[3];
	if(curprod > maxprod)
		maxprod = curprod;
	curprod = a[0]*a[1]*a[2]*a[3]*a[4];
	cout << maxprod;
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