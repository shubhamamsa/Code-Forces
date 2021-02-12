#include<bits/stdc++.h>
#define mod 1000000007

using namespace std;

void subMain()	{
	string x;
	cin >> x;
	int num = x[0]-'0';
	cout << 10*(num-1)+(x.length()*(x.length()+1)/2);
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