#include<bits/stdc++.h>
#define mod 1000000007

using namespace std;

void subMain()	{
	long long n, temp;
	cin >> n;
	temp = n;
	map<long long, long long>div;
	for(long long i=2;i<=sqrtl(n);i++)	{
		while(temp%i == 0)	{
			temp/=i;
			div[i]++;
		}
	}
	if(temp!=1)
		div[temp]++;
	long long max = 0, maxi;
	for(auto i: div)	{
		if(i.second > max)	{
			max = i.second;
			maxi = i.first;
		}
	}
	cout << max << "\n";
	long long final[max];
	for(long long i=0;i<max;i++)
		final[i] = maxi;
	for(auto i: div)	{
		if(i.first == maxi)
			continue;
		for(long long j=max-1;j>=0&&i.second!=0;j--)	{
			final[j]*=i.first;
			i.second--;
		}
	}
	for(long long i=0;i<max;i++)
		cout << final[i] << " ";
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