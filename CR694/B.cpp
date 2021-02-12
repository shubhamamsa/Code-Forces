#include<bits/stdc++.h>
#define mod 1000000007

using namespace std;

void subMain()	{
	long long n, x;
	cin >> n >> x;
	vector<pair<long long, long long> >a;
	long long t;
	long long sum = 0;
	for(int i=0;i<n;i++)	{
		cin >> t;
		a.push_back(make_pair(t, 1));
	}
	for(int i=0;i<a.size();i++)	{
		if(a[i].first%x == 0)	{
			a.push_back(make_pair(a[i].first/x, a[i].second*x));
		}	
		else
			break;	
	}
	for(int i=0;i<a.size();i++)
		sum+=a[i].first*a[i].second;
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