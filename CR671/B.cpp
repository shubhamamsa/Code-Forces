#include<bits/stdc++.h>
#define mod 1000000007

using namespace std;

void subMain()	{
	long long x;
	cin >> x;
	long long count = 0;
	long long sum = 0, num = 1;
	while(sum <= x)	{
		num*=2;
		sum+=(num)*(num-1)/2;
		if(sum <= x)
			count++;
	}
	cout << count;
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