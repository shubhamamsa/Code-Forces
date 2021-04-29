#include<bits/stdc++.h>
#define mod 1000000007

using namespace std;

void subMain()	{
	int n, k;
	cin >> n >> k;
	long long temp = k;
	while(temp < n)	{
		temp+=k;
	}
	int ans = temp/n;
	if(temp%n != 0)
		ans++;
	cout << ans;
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