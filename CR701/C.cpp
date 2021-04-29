#include<bits/stdc++.h>
#define mod 1000000007

using namespace std;

void subMain()	{
	long long x, y;
	cin >> x >> y;
	long long sum = 0, i = 1;
	while(1)	{
		if(i > x || i > y)
			break;
		long long temp = x/i-1;
		if(temp < y)	{
			sum += (temp-1);
		}
		else	{
			sum += (y-i)*(y-2);
			break;
		}
		i++;
	}
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