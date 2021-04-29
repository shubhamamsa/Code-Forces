#include<bits/stdc++.h>
#define mod 1000000007

using namespace std;

void subMain()	{
	int n, d;
	cin >> n >> d;
	int a[n], flag = 0;
	for(int i=0;i<n;i++)	{
		cin >> a[i];
		if(a[i] > d)
			flag = 1;
	}
	sort(a, a+n);
	if(flag == 0)	{
		cout << "YES";
		return;
	}
	if(a[0]+a[1]<=d)
		cout << "YES";
	else
		cout << "NO";
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