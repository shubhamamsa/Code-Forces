#include<bits/stdc++.h>
#define mod 1000000007

using namespace std;

void subMain()	{
	int n;
	cin >> n;
	if(n == 1)
		cout << 0;
	else if(n == 2)
		cout << 1;
	else if(n == 3)
		cout << 2;
	else if(n%2==0)
		cout << 2;
	else if(n%2!=0)
		cout << 3;
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