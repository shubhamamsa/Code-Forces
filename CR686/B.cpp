#include<bits/stdc++.h>
#define mod 1000000007

using namespace std;

void subMain()	{
	int n;
	cin >> n;
	int a[n];
	for(int i=0;i<n;i++)
		cin >> a[i];
	map<int, int>singleton;
	for(int i=0;i<n;i++)
		singleton[a[i]]++;
	int temp = -1;
	for(auto i: singleton)	{
		if(i.second == 1)	{
			temp = i.first;
			break;
		}
	}
	for(int i=0;i<n;i++)	{
		if(a[i] == temp)	{
			cout << i+1;
			return;
		}
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
