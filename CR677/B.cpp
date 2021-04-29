#include<bits/stdc++.h>
#define mod 1000000007

using namespace std;

void subMain()	{
	int n;
	cin >> n;
	int a[n];
	for(int i=0;i<n;i++)
		cin >> a[i];
	int sum = 0;
	int l=0;
	for(l=0;l<n;l++)
		if(a[l] == 1)
			break;
	int r = n-1;
	for(r;r>=0;r--)
		if(a[r] == 1)
			break;
	for(int i=l;i<=r;i++)
		if(a[i]==0)
			sum++;
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