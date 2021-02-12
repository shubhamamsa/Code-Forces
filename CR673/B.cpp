#include<bits/stdc++.h>
#define mod 1000000007

using namespace std;

void subMain()	{
	long long n, T;
	cin >> n >> T;
	long long a[n], b[n];
	for(int i=0;i<n;i++)
		cin >> a[i];
	if(T%2!=0)	{
		for(int i=0;i<n;i++)	{
			if(a[i]<=T/2)
				b[i] = 0;
			else
				b[i] = 1;
		}
	}
	else	{
		int count = 0;
		for(int i=0;i<n;i++)	{
			if(a[i]<T/2)
				b[i] = 0;
			else if(a[i] > T/2)
				b[i] = 1;
			else	{
				b[i] = -1;
				count++;
			}
	}
	int k = 0, i=0;
	while(k<count/2)	{
		if(b[i] == -1)	{
			b[i] = 0;
			k++;
		}
		i++;
	}
	i = 0;
	}
	for(int i=0;i<n;i++)	{
		if(b[i] == -1)
			b[i] = 1;
		cout << b[i] << " ";
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