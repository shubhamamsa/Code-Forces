#include<bits/stdc++.h>
#define mod 1000000007

using namespace std;

void subMain()	{
	long long a, b, k;
	cin >> a >> b >> k;
	map<long long, long long> boys, girls;
	long long x;
	for(int i=0;i<k;i++)	{
		cin >> x;
		boys[x]++;
	}
	for(int i=0;i<k;i++)	{
		cin >> x;
		girls[x]++;
	}
	long long ans = k*(k-1)/2;
	long long dust = 0;
	for(auto i: boys)	{
		if(i.second > 1)
			dust += i.second*(i.second-1)/2;
	}
	for(auto i: girls)	{
		if(i.second > 1)
			dust += i.second*(i.second-1)/2;
	}
	cout << ans-dust;
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