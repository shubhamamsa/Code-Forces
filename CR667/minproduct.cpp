#include<bits/stdc++.h>
#define mod 1000000007

using namespace std;

long long min(long long a, long long b)	{
	return a>b?b:a;
}

long long test(long long a, long long b, long long x, long long y, long long n)	{
	long long ans = 1;
	if(a-n>=x)	{
		ans*=(a-n);
		n = 0;
	}
	else	{
		ans*=x;
		n -= a-x;
	}
	if(b-n>=y)	{
		ans*=(b-n);
		n = 0;
	}
	else	{
		ans*=y;
		n -= b-y;
	}
	//cout << ans << " ";
	return ans;
}

void subMain()	{
	long long a, b, x, y, n;
	cin >> a >> b >> x >> y >> n;
	long long ans1 = test(a, b, x, y, n);
	long long ans2 = test(b, a, y, x, n);
	cout << min(ans1, ans2);
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