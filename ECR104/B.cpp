#include<bits/stdc++.h>
#define mod 1000000007

using namespace std;

void subMain()	{
	long long n, k;
	cin >> n >> k;
	long long ans = 0;
	if(n%2 == 0)	{
		ans = k%n;
		if(ans == 0)
			ans = n;
	}
	else	{
		long long count = (k-1)/((n/2));
		
		ans = (k+count)%n;
		if(ans == 0)
			ans = n;
	}
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