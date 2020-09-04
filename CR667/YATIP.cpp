#include<bits/stdc++.h>
#define mod 1000000007

using namespace std;

void subMain()	{
	int a, b;
	cin >> a >> b;
	int diff = abs(a-b);
	int ans = diff/10;
	if(diff%10!=0)
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