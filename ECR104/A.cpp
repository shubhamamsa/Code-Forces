#include<bits/stdc++.h>
#define mod 1000000007

using namespace std;

void subMain()	{
	int n;
	cin >> n;
	int a[n];
	for(int i=0;i<n;i++)
		cin >> a[i];
	int min = a[0];
	for(int i=1;i<n;i++)	{
		if(a[i] < min)	{
			min = a[i];
		}
	}
	int count = 0;
	for(int i=0;i<n;i++)
		if(a[i] == min)
			count++;
	cout << n-count;
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