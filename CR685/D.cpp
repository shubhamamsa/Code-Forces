#include<bits/stdc++.h>
#define mod 1000000007

using namespace std;

void subMain()	{
	long long d, k;
	cin >> d >> k;
	long long max = d/k;
	vector<pair<long long, long long>>numbers;
	//numbers.push_back(make_pair(max, 0));
	for(long long i=0;i<=max;i++)	{
		long long y = sqrt((d*d)-((i*k)*(i*k)))/k;
		numbers.push_back(make_pair(i, y));
	}
	pair<long long, long long>test=make_pair(0, 0);
	for(int i=0;i<numbers.size();i++)	{
		if((numbers[i].first*numbers[i].second) > (test.first*test.second))
			test=numbers[i];
	}
	if((test.first+test.second)%2!=0)
		cout << "Ashish";
	else
		cout << "Utkarsh";
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