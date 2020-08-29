#include<bits/stdc++.h>
#define mod 1000000007

using namespace std;

void subMain()	{
	int n;
	cin >> n;
	string s;
	cin >> s;
	if(s[n-1] == '0')
	for(int i=0;i<n;i++)
		cout << 0;
	else
		for(int i=0;i<n;i++)
		cout << 1;
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