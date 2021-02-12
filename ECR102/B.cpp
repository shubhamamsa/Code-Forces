#include<bits/stdc++.h>
#define mod 1000000007

using namespace std;

bool divide(string a, string b)	{
	int k = 0;
	for(int i=0;i<a.length();i++)	{
		if(a[i] != b[k])
			return false;
		k++;
		k = k%b.length();
	}
	return true;
}

void subMain()	{
	string a, b;
	cin >> a >> b;
	if(a.length() > b.length())
		swap(a, b);
	vector<int>factors;
	for(int i=1;i<=a.length();i++)
		if(a.length()%i == 0 && b.length()%i==0)
			factors.push_back(i);
	int flag = 0;
	string substring;
	for(int i=0;i<factors.size();i++)	{
		substring = a.substr(0, factors[i]);
		if(divide(a, substring) && divide(b, substring))	{
			flag = 1;
			break;
		}
	}
	if(flag == 0)	{
		cout << -1;
		return;
	}
	int lcm = (a.length()*b.length())/__gcd(a.length(), b.length());
	for(int i=0;i<lcm/substring.length();i++)
		cout << substring;
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