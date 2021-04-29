#include<bits/stdc++.h>
#define mod 1000000007

using namespace std;

void subMain()	{
	int n, k;
	cin >> n >> k;
	cout << n-k+k/2 << "\n";
	for(int i=n;i>k;i--)
		cout << i << " ";
	for(int i = k-1;i>=k/2+k%2!=0;i--) 
		cout << i << " ";

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