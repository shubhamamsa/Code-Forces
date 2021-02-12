#include<bits/stdc++.h>
#define mod 1000000007

using namespace std;

bool check1(string s, int l)	{
	for(int i=0;i<l;i++)
		if(s[i] == s[l])
			return true;
	return false;
}

bool check2(string s, int l, int n)	{
	for(int i=l;i<n;i++)
		if(s[i] == s[l-1])
			return true;
	return false;
}

void subMain()	{
	int n, q;
	cin >> n >> q;
	string s;
	cin >> s;
	while(q--)	{
		int l, r;
		cin >> l >> r;
		if(check1(s, l-1) || check2(s, r, n))
			cout << "YES" << "\n";
		else
			cout << "NO" << "\n";
	}
}

int main()	{
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
	int t = 1;
	cin >> t;
	while(t--)	{
		subMain();
	}	
	return 0;
}