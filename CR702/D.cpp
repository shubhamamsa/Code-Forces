#include<bits/stdc++.h>
#define mod 1000000007

using namespace std;

void subMain()	{
	int n;
	cin >> n;
	int a[n];
	for(int i=0;i<n;i++)
		cin >> a[i];
	int count1, count2;
	for(int i=0;i<n;i++)	{
		count1 = 0;
		count2 = 0;
		int temp = a[i];
		for(int j = i-1;j>=0;j--)	{
			if(temp < a[j])	{
				temp = a[j];
				count1++;
			}
		}
		temp = a[i];
		for(int j = i+1;j<n;j++)	{
			if(temp < a[j])	{
				temp = a[j];
				count2++;
			}
		}
		cout << (count1+count2) << " ";
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