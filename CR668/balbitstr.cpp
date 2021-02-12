#include<bits/stdc++.h>
#define mod 1000000007

using namespace std;

void subMain()	{
	int n, k;
	cin >> n >> k;
	string s;
	cin >> s;
	int a[k] = {0};
	for(int i=0;i<k;i++)	{
		int one = 0, zero = 0;
		for(int j=i;j<n;j+=k)	{
			if(s[j] == '0')
				zero = 1;
			else if(s[j] == '1')
				one = 1;
		}
		if(one == 1 && zero == 1)	{
			cout << "NO";
			return;
		}
		else if(one == 1)
			a[i] = 1;
		else if(zero == 1)
			a[i] = 0;
		else
			a[i] = 2;
	}
	int one = 0, zero = 0;
	for(int i=0;i<k;i++)	{
		if(a[i] == 0)
				zero++;
			else if(a[i] == 1)
				one++;
	}
	if(k/2 < one || k/2 < zero)	{
		cout << "NO";
		return;
	}
	cout << "YES";
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