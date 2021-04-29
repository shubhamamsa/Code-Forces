#include<bits/stdc++.h>
#define mod 1000000007

using namespace std;

long long mini(long long a, long long b)	{
	if(a > b)
		return a;
	return b;
}

void subMain()	{
	long long a, b;
	cin >> a >> b;
	long long min = 1000000000, test = 0;
	if(b > a)	{
		cout << 1;
		return;
	}
	if(b == a)		{
		cout << 2;
		return;
	}
	if(b == 1)	{
		b++;
		test++;
	}
	for(int i=b;i<=mini(100000, b);i++)	{
		long long temp = a;
		long long count = 0;
		while(temp)	{
			temp/=i;
			count++;
		}	
		count+=test;
		if(min > count)	{
			min = count;
		}
		test++;
	}
	cout << min;
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