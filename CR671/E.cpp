#include<bits/stdc++.h>
#define mod 1000000007

using namespace std;

void div(set<long long>&div, long long n)	{
	for(long long i=2;i<=sqrtl(n);i++)	{
		if(i*i == n)
			div.insert(i);
		else if(n%i==0)	{
			div.insert(i);
			div.insert(n/i);
		}
	}
	div.insert(n);
}

long long lcm(long long a, long long b)	{
	long long lcm = a/__gcd(a, b);
	return lcm*b;
}

void subMain()	{
	long long n;
	cin >> n;
	set<long long>divisors;
	div(divisors, n);
	vector<long long>decipher;
	long long size = 0;
	while(divisors.size()!=0)	{
		auto i = divisors.begin();
		long long x = *i;
		if(size == 0)
			decipher.push_back(x);
		else	{
			if(__gcd(x, decipher[size-1]) > 1)
				decipher.push_back(*i);
			else	{
				long long lim = lcm(x, decipher[size-1]);
				divisors.erase(lim);
				decipher.push_back(lim);
				decipher.push_back(x);
				size++;
			}
		}
		divisors.erase(x);
		size++;
	}
	for(long long i=0;i<size;i++)
		cout << decipher[i] << " ";
	cout << endl;
	if(__gcd(decipher[0], decipher[size-1]) == 1)
		cout << 1;
	else
		cout << 0;
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