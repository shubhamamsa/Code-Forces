#include<bits/stdc++.h>
#define mod 1000000007

using namespace std;

int test(int x, int y, int n)	{
	for(int i=n-1;i>=1;i--)	{
		if((y-x)%i == 0)
			return (y-x)/i;
	}
}

int find(int arr[], int n)	{
	for(int i=0;i<n;i++)
		if(arr[i]>0)
			return arr[i];
}

void print(int arr[], int n)	{
	for(int i=0;i<n;i++)
		cout << arr[i] << " ";
}

void subMain()	{
	int n;
	int x, y;
	cin >> n >> x >> y;
	int d = test(x, y, n);
	int a = y-(n-1)*d;
	int arr[n];
	arr[0] = a;
	for(int i=1;i<n;i++)
		arr[i] = arr[i-1]+d;
	if(arr[0]<=0)	{
		int x = find(arr, n)-arr[0];
		for(int i=0;i<n;i++)
			arr[i]+=x;
	}
	print(arr, n);
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