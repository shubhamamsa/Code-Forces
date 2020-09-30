#include<bits/stdc++.h>
#define mod 1000000007

using namespace std;

void subMain()	{
	int n, k;
	cin >> n >> k;
	int a[n];
	for(int i=0;i<n;i++)
		cin >> a[i];
	sort(a, a+n);
	int count = 0;
	for(int i=1;i<n;i++)
		count+=max(0, ((k-a[i])/a[0]));
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