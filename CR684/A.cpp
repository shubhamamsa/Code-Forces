#include<bits/stdc++.h>
#define mod 1000000007

using namespace std;

void subMain()	{
	int n, c0, c1, h;
	cin >> n >> c0 >> c1 >> h;
	string s;
	cin >> s;
	int count1 = 0, count0 = 0;
	for(int i=0;i<n;i++)	{
		if(s[i] == '0')
			count0++;
		else
			count1++;
	}
	if(h+c0<=c1)	{
		cout << count0*c0+count1*(c0+h);
	}
	else if(h+c1 <= c0)	{
		cout << count0*(c1+h)+count1*(c1);	
	}
	else	{
		cout << count0*(c0)+count1*(c1);
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