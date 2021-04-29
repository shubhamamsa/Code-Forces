#include<bits/stdc++.h>
#define mod 1000000007

using namespace std;

void subMain()	{
	int n;
	cin >> n;
	if((n-1)%2 == 0)	{
		int flag = 1;
		for(int i=0;i<n*(n-1)/2;i++)	{
			cout << flag << " ";
			flag *= -1;
		}
	}
	else	{
		int flag = 1;
		for(int i=0;i<n;i++)	{
			int j=0;
			if(i%2 == 0)	{
				cout << 0 << " ";
				j++;
			}
			for(j;j<n-i-1;j++)	{
				cout << flag << " ";
				flag*=-1;
			}
			flag*=-1;
		}
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