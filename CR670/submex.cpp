#include<bits/stdc++.h>
#define mod 1000000007

using namespace std;

void subMain()	{
	int n;
	cin >> n;
	int a[101] = {0};
	int x;
	for(int i=0;i<n;i++)	{
		cin >> x;
		a[x]++;
	}
	int flag = 0, sum = 0;
	for(int i=0;i<101;i++)	{
		if(flag == 2)
			break;
		if(flag == 0)	{
			if(a[i] == 0)	{
				flag = 2;
				sum+=2*i;
			}
			if(a[i] == 1)	{
				sum+=i;
				flag++;
			}
		}
		else if(flag == 1)	{
			if(a[i] == 0)	{
				sum+=i;
				flag++;
			}

		}
	}
	cout << sum;
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