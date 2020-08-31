#include<bits/stdc++.h>
#define mod 1000000007

using namespace std;

long long min(long long a, long long b)	{
	if(a>b)
		return b;
	else
		return a;
}

void subMain()	{
	long long n;
	cin >> n;
	long long a[n];
	for(long long i=0;i<n;i++)
		cin >>a[i];
	sort(a, a+n);
	long long power;
	double check = pow(10, log10(a[n-1])/(n-1));
	if(check - double(int(check)) < 0.5)
		power = check;
	else
		power = check+1;
	//cout << a[n-1] << " " << power << endl;
	long long sum = 0, sum1 = 0, sum2 = 0;
	for(int i=0;i<n;i++)	{
		sum+=abs(pow(power, i)-a[i]);
	}
	if(n < 10)	{
	for(int i=0;i<n;i++)	{
		sum1+=abs(pow(power+1, i)-a[i]);
	}
}
else
sum1 = 100000000000000;
	for(int i=0;i<n;i++)	{
		sum2+=abs(pow(power-1, i)-a[i]);
	}
	cout << min(min(abs(sum1), abs(sum2)), abs(sum));
}

int main()	{
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
	int t = 1;
	//cin >> t;
	while(t--)	{
		subMain();
		cout << "\n";
	}	
	return 0;
}