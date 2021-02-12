#include<bits/stdc++.h>
#define mod 1000000007

using namespace std;

void subMain()	{
	int n, x;
	cin >> n >> x;
	int count = 1;
	if(n<=2)
		cout << 1;
	else	{
		n-=2;
		count++;
		while(n>x)	{
			count++;
			n-=x;
		}
		cout << count;
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