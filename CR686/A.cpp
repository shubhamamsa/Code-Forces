#include<bits/stdc++.h>
#define mod 1000000007

using namespace std;

void subMain()	{
	int n;
	cin >> n;
	if(n%2!=0)	{
		cout << n/2+1 << " ";
	}
	for(int i=n;i>0;i--)	{
		if(n%2==0)
			cout << i << " ";
		else if(i!=n/2+1)
			cout << i << " ";
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