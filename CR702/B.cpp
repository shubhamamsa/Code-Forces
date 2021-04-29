#include<bits/stdc++.h>
#define mod 1000000007

using namespace std;

void subMain()	{
	int n;
	cin >> n;
	int x;
	int c0 = 0, c1 = 0, c2 = 0;
	for(int i=0;i<n;i++)	{
		cin >> x;
		if(x%3 == 0)
			c0++;
		else if(x%3 == 1)
			c1++;
		else
			c2++;
	}
	int count = 0;
	cout << c0 << " " << c1 << " " << c2 << endl;
	if(c1 == c2 && c2 == c0)	{
		cout << 0;
		return;
	}
	if(c2 >= c1 && c2 >= c0)	{
		count += c2-n/3;
		c0 += c2-n/3;
		if(c0 > c1)	
			count += c0-n/3;
		else
			count+=2*(c1-n/3);
	}
	else if(c1 >= c2 && c1 >= c0)	{
		count += c1-n/3;
		c2 += c1-n/3;
		if(c2 > c0)	
			count += c2-n/3;
		else
			count+=2*(c0-n/3);
		// cout << 1;
	}
	else 	{
		count+=c0-n/3;
		c1 += c0-n/3;
		if(c1 > c2)	
			count += c1-n/3;
		else
			count+=2*(c2-n/3);
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