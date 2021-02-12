#include<bits/stdc++.h>
#define mod 1000000007

using namespace std;

void subMain()	{
	long long n, x;
	cin >> n >> x;
	long long a[n];
	for(int i=0;i<n;i++)
		cin >> a[i];
	long long a1 = 0, a2 = 0, sum = 0;
	for(int i=0;i<n;i++)	{
		sum+=a[i];
		if(a[i]%x==0)
			a1+=a[i]/x;
		else
			a1+=a[i]/x+1;
	}	
	if(sum%x == 0)
		a2 = (sum/x);
	else
		a2 = sum/x+1;
	cout << a2 << " " << a1;
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