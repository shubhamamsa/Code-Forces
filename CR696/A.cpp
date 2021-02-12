#include<bits/stdc++.h>
#define mod 1000000007

using namespace std;

void subMain()	{
	int n;
	cin >> n;
	string b, a="";
	cin >> b;
	int prev = 0;
	for(int i=0;i<n;i++)	{
		if(b[i] == '1' && prev == 2)	{
			a+='0';
			prev = 1;
		}
		else if(b[i] == '1' && prev != 2)	{
			a+='1';
			prev = 2;	
		}
		else if(b[i] == '0' && prev == 1)	{
			a+='0';
			prev = 0;	
		}
		else if(b[i] == '0' && prev != 1)	{
			a+='1';
			prev = 1;	
		}
	}
	cout << a;
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