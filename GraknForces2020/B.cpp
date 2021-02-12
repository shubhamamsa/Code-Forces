#include<bits/stdc++.h>
#define mod 1000000007

using namespace std;

void subMain()	{
	int n, k;
	cin >> n >> k;
	int a[n];
	for(int i=0;i<n;i++)
		cin >> a[i];
	set<int>s;
	for(int i=0;i<n;i++)
		s.insert(a[i]);
	int size = s.size();
	if(k == 1 && s.size() > 1)
		cout << -1;
	else	{
		int count;
		if(size == 1)
			count = 1;
		else
			count = 0;
		while(size > 1)	{
			size-=k;
			size++;
			count++;
		}
		cout << count;
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