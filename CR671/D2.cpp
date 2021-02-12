#include<bits/stdc++.h>
#define mod 1000000007

using namespace std;

void subMain()	{
	int n;
	cin >> n;
	int a[n];
	for(int i=0;i<n;i++)
		cin >> a[i];
	sort(a, a+n);
	int final[n];
	int x = 0, count = 0;
	for(int i=1;i<n;i+=2)
		final[i] = a[x++];
	x = n/2;
	for(int i=0;i<n;i+=2)
		final[i] = a[x++];
	for(int i=1;i<n-1;i++)	{
		if((final[i-1] > final[i]) && (final[i+1] > final[i]))
			count++;
	}
	cout << count << endl;
	for(int i=0;i<n;i++)
		cout << final[i] << " ";
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