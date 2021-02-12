#include<bits/stdc++.h>
#define mod 1000000007

using namespace std;

void subMain()	{
	int n;
	cin >> n;
	map<int, int>x;
	int a;
	for(int i=0;i<n;i++)	{
		cin >> a;
		x[a]++;
	}
	int max = 0;
	for(auto i: x)	{
		if(i.second > max)
			max = i.second;
	}
	cout << max;
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