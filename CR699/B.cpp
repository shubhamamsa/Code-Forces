#include<bits/stdc++.h>
#define mod 1000000007

using namespace std;

void subMain()	{
	long long n, k;
	cin >> n >> k;
	int h[n];
	for(int i=0;i<n;i++)
		cin >> h[i];
	int flag = 1, m = 1;
	while(flag)	{
		flag = 0;
		for(int i=0;i<n-1;i++)	{
			if(h[i] < h[i+1])	{
				flag = 1;
				h[i]++;
				if(m == k)	{
					cout << i+1;
					return;
				}
				break;
			}
		}
		m++;
	}
	cout << -1;
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