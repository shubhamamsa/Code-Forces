#include<bits/stdc++.h>
#define mod 1000000007
 
using namespace std;
 
void subMain()	{
	long long n, k;
	cin >> n >> k;
	long long a[n];
	for(int i=0;i<n;i++)
		cin >> a[i];
	long long sum = a[0];
	long long diff = 0;
	for(int i=1;i<n;i++)	{
		long double inf = static_cast<long double>(a[i])/static_cast<long double>(static_cast<long double>(k)/static_cast<long double>(100));
		if(inf > sum)	{
			diff += ceill(inf) - sum;
			sum = ceill(inf);
		}
		sum+=a[i];
	}
	cout << diff;
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