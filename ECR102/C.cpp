#include<bits/stdc++.h>
#define mod 1000000007

using namespace std;

void subMain()	{
	int n, k;
	cin >> n >> k;
	int num[k];
	for(int i=0;i<k;i++)
		num[i] = i+1;
	reverse(num+k-(n-k)-1, num+k);
	for(int i=0;i<k;i++)
		cout << num[i] << " ";
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