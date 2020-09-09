#include<bits/stdc++.h>
#define mod 1000000007

using namespace std;

void subMain()	{
	int n;
	cin >> n;
	int a[n];
	for(int i=0;i<n;i++)
		cin >> a[i];
	sort(a, a+n, greater<int>());
	int maxGCD=0, index, store = a[0];
	for(int i=0;i<n-1;i++)	{
		maxGCD = 0;
		index = i+1;
		for(int j=i+1;j<n;j++)	{
			if(__gcd(store, a[j]) > maxGCD)	{
				index = j;
				maxGCD = __gcd(store, a[j]);
			}
		}
		swap(a[i+1], a[index]);
		store = maxGCD;
	}
	for(int i = 0;i<n;i++)
		cout << a[i] << " ";
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