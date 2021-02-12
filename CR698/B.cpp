#include<bits/stdc++.h>
#define mod 1000000007

using namespace std;

bool check(int n, int d)	{
	while(n > 0)	{
		int dig = n%10;
		if(dig == d)
			return true;
		n/=10;
	}
	return false;
}

void subMain()	{
	long long q, d;
	cin >> q >> d;
	int a[q];
	for(int i=0;i<q;i++)
		cin >> a[i];
	for(int i=0;i<q;i++)	{
		if(a[i] >= 100)
			cout << "YES\n";
		else	{
			while(check(a[i], d) == 0 && a[i] > 0)
				a[i]-=d;
			if(check(a[i], d))
				cout << "YES\n";
			else
				cout << "NO\n";
		}
	}
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