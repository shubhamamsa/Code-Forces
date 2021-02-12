#include<bits/stdc++.h>
#define mod 1000000007

using namespace std;

void subMain()	{
	long long x, y, k;
	cin >> x >> y >> k;
	long long sum = (y+1)*k;
	long long count = 1;
	sum-=x;
	if(sum < 0)	{
		count+=k;
	}
	else	{
	if(sum%(x-1) == 0)
		count+=sum/(x-1);
	else	{
		count++;
		count+=sum/(x-1);
	}
	count+=k;
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