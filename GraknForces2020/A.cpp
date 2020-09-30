#include<bits/stdc++.h>
#define mod 1000000007

using namespace std;

void subMain()	{
	int n;
	cin >> n;
	int a[n], b[n], c[n];
	for(int i=0;i<n;i++)
		cin >> a[i];
	for(int i=0;i<n;i++)
		cin >> b[i];
	for(int i=0;i<n;i++)
		cin >> c[i];
	int p[n];
	for(int i=0;i<n-1;i++)	{
		if(i == 0)
			p[i] = a[i];
		else	{
			if(p[i-1] == a[i])	{
				if(p[i-1] == b[i])	{
					p[i] = c[i];
				}
				else
					p[i] = b[i];
			}
			else	{
				p[i] = a[i];
			}
		}
	}
	if(a[n-1] != p[0] && a[n-1]!=p[n-2])
		p[n-1] = a[n-1];
	else if(b[n-1] != p[0] && b[n-1]!=p[n-2])
		p[n-1] = b[n-1];
	else if(c[n-1] != p[0] && c[n-1]!=p[n-2])
		p[n-1] = c[n-1];
	for(int i=0;i<n;i++)
		cout << p[i] << " ";
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