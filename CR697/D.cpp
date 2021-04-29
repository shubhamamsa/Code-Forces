#include<bits/stdc++.h>
#define mod 1000000007

using namespace std;

void subMain()	{
	long long n, m;
	cin >> n >> m;
	long long a[n];
	long long b[n];
	long long sum = 0;
	for(int i=0;i<n;i++)	{
		cin >> a[i];
		sum += a[i];
	}
	for(int i=0;i<n;i++)
		cin >> b[i];
	if(sum < m)	{
		cout << -1;
		return;
	}
	sum = 0;
	long long cost = 0;
	vector<long long>single;
	vector<long long>doub;
	for(int i=0;i<n;i++)	{
		if(b[i] == 1)
			single.push_back(a[i]);
		else
			doub.push_back(a[i]);
	}
	sort(single.begin(), single.end(), greater<long long>());
	long long extract = 0;
	if(single.size()%2 != 0)	{
		extract = single[single.size()-1];
		single.pop_back();
	}
	for(int i=0;i<single.size();i+=2)
		doub.push_back(single[i]+single[i+1]);
	sort(doub.begin(), doub.end(), greater<long long>());
	int i = 0;
	while(sum < m)	{
		if(sum+extract >= m)	{
			cost++;
			break;
		}
		sum += doub[i++];
		cost+=2;
	}
	cout << cost;
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