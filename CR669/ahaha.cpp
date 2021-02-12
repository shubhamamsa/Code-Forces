#include<bits/stdc++.h>
#define mod 1000000007

using namespace std;

void subMain()	{
	int n;
	cin >> n;
	int a[n];
	int one = 0, zero = 0;
	for(int i=0;i<n;i++)	{
		cin >> a[i];
		if(a[i] == 1)
			one++;
		else
			zero++;
	}
	if(zero>=n/2)	{
		cout << n/2 << endl;
		for(int i=0;i<n/2;i++)
			cout << 0 << " ";
	}
	else {
		if((n/2)%2!=0)
			cout << n/2+1 << endl;
		else
			cout << n/2 << endl;
		for(int i=0;i<n/2;i++)
			cout << 1 << " ";
		if((n/2)%2!=0)	{
			if(one == n/2)
				cout << 0;
			else
				cout << 1;
		}	
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