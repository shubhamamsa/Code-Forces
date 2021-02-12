#include<bits/stdc++.h>
#define mod 1000000007

using namespace std;

void subMain()	{
	int n, x, inp;
	cin >> n >> x;
	vector<int>ratings;
	for(int i=0;i<n;i++)	{
		cin >> inp;
		if(inp!=x)
			ratings.push_back(inp);	
	}
	if(ratings.size() == 0)	{
		cout << 0;
		return;
	}
	else if(ratings.size() < n)	{
		cout << 1;
		return;
	}
	int sum = 0;
	for(int i=0;i<n;i++)	{
		sum+=(x-ratings[i]);
	}
	if(sum == 0)	{
		cout << 1;
		return;
	}
	cout << 2;
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