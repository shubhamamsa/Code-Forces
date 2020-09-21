#include<bits/stdc++.h>
#define mod 1000000007

using namespace std;

void subMain()	{
	string n;
	int dig;
	cin >> dig;
	cin >> n;
	vector<int>edig, odig;
	int flag = -1;
	for(int i=0;i<n.length();i++)	{
		if(flag == -1)
			odig.push_back(n[i]-'0');
		else
			edig.push_back(n[i]-'0');
		flag*=-1;
	}
	if(dig%2 == 0)	{
		for(int i=0;i<edig.size();i++)	{
			if(edig[i]%2==0)	{
				cout << 2;
				return;
			}
		}
		cout << 1;
		return;
	}
	else 	{
		for(int i=0;i<odig.size();i++)	{
			if(odig[i]%2!=0)	{
				cout << 1;
				return;
			}
		}
		cout << 2;
		return;	
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