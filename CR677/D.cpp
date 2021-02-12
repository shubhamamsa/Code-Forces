#include<bits/stdc++.h>
#define mod 1000000007

using namespace std;

void subMain()	{
	int n;
	cin >> n;
	int a[n];
	for(int i=0;i<n;i++)
		cin >> a[i];
	int first = 0;
	int second = -1;
	for(int i=1;i<n;i++)	{
		if(a[i]!=a[first])	{
			second = i;
			break;
		}
	}
	if(second == -1)	{
		cout << "NO";
		return;
	}
	cout << "YES\n";
	for(int i=1;i<n;i++)	{
		if(a[i] == a[first])
			cout << second+1 << " " << i+1;
		else
			cout << first+1 << " " << i+1;
		if(i!=n-1)
			cout << "\n";
	}
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