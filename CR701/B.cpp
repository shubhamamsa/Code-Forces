#include<bits/stdc++.h>
#define mod 1000000007

using namespace std;

void subMain()	{
	long long n, q, k;
	cin >> n >> q >> k;
	long long a[n], presum[n];
	for(int i=0;i<n;i++)	{
		cin >> a[i];
	}
	for(int i=0;i<n;i++)	{
		if(i == 0)	{
			presum[i] = 0;
		}
		else	{
			presum[i] = 2*(a[i]-a[i-1]-1);
		}
	}
	for(int i=1;i<n;i++)	{
		presum[i]+=presum[i-1];
	}
	long long l, r;
	while(q--)	{
		cin >> l >> r;
		l--;
		r--;
		cout << presum[r] - presum[l] + k-a[r]+ a[l]-1 << "\n";
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