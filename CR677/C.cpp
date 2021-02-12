#include<bits/stdc++.h>
#define mod 1000000007

using namespace std;

long long check(long long a[], long long n)	{
	int flag = 0;
	for(int i=1;i<n;i++)	{
		if(a[i]!=a[i-1])	{
			flag = 1;
			break;
		}
	}
	if(flag == 0)
		return -1;
	int max = 0;
	for(int i=1;i<n;i++)	{
		if(a[i] > a[max])
			max = i;
	}
	for(int i=0;i<n;i++)	{
		if(i!=0)	{
			if(a[i] == a[max] && a[i-1]!=a[max])	{
				max = i;
				break;
			}
		}
		if(i!=n-1)	{
			if(a[i] == a[max] && a[i+1]!=a[max])	{
				max = i;
				break;
			}	
		}
	}
	return max+1;
}

void subMain()	{
	long long n;
	cin >> n;
	long long a[n];
	for(int i=0;i<n;i++)
		cin >> a[i];
	long long index = check(a, n);
	cout << index;
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