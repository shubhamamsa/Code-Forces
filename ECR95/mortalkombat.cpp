#include<bits/stdc++.h>
#define mod 1000000007

using namespace std;

void subMain()	{
	int n;
	cin >> n;
	int a[n];
	for(int i=0;i<n;i++)
		cin >> a[i];
	int one = 0, count=0;
	if(a[0] == 1)
		count++;
	for(int i=1;i<n;i++)	{
		if(a[i] == 1)
			one++;
		else {
			count=count+(one/3);
			one = 0;
		}
		if(i == n-1 && a[n-1] == 1)	{
			count=count+(one/3);
		}
	}
	cout << count;
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