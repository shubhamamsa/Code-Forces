#include<bits/stdc++.h>
#define mod 1000000007

using namespace std;

void subMain()	{
	int n;
	cin >> n;
	int a[n];
	for(int i=0;i<n;i++)
		cin >> a[i];
	int min, max, count = 0;
	for(int i=0;i<n-1;i++)	{
		if(a[i] < a[i+1])	{
			min = a[i];
			max = a[i+1];
		}
		else	{
			min = a[i+1];
			max = a[i];
		}
		while(min*2 < max)	{
			min*=2;
			count++;
		}
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