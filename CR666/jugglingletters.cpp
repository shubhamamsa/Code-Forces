#include<bits/stdc++.h>
#define mod 1000000007

using namespace std;

void subMain()	{
	int n;
	cin >> n;
	int a[26] = {0};
	int sum = 0;
	for(int i=0;i<n;i++)	{
		string s;
		cin >> s;
		sum+=s.length();
		for(int j=0;j<s.length();j++)
			a[s[j]-'a']++;
	}
	if(sum%n != 0)	{
		cout << "NO";
		return;
	}
	else	{
	for(int i=0;i<26;i++)
		if(a[i]%(n) != 0)	{
			cout << "NO";
			return;
		}
	cout << "YES";
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