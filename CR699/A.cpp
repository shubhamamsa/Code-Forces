#include<bits/stdc++.h>
#define mod 1000000007

using namespace std;

void subMain()	{
	int n, m;
	cin >> n >> m;
	string s;
	cin >> s;
	int left = 0, right = 0, up = 0, down = 0;
	for(int i=0;i<s.length();i++)	{
		if(s[i] == 'L')
			left++;
		else if(s[i] == 'R')
			right++;
		else if(s[i] == 'U')
			up++;
		else if(s[i] == 'D')
			down++;
	}
	if(n >= 0)	{
		if(right < abs(n))	{
			cout << "NO";
			return;
		}
	}
	else	{
		if(left < abs(n))	{
			cout << "NO";
			return;
		}
	}
	if(m >=0)	{
		if(up < abs(m))	{
			cout << "NO";
			return;
		}
	}
	else	{
		if(down < abs(m))	{
			cout << "NO";
			return;
		}
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