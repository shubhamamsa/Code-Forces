#include<bits/stdc++.h>
#define mod 1000000007

using namespace std;

void subMain()	{
	long long n;
	cin >> n;
	long long a[n], b[n];
	set<long long>distinct;
	for(long long i=0;i<n;i++)	{
		cin >> a[i];
		b[i] = a[i];		
		if(i>0)
			b[i]+=b[i-1];
	}
	long long count = 0;
	for(long long i=0;i<n;i++)	{
		if(distinct.find(b[i]) == distinct.end())
			distinct.insert(b[i]-a[i]);
		else	{
			i--;
			count++;
			distinct.clear();
		}
	}
	cout << count;
}

int main()	{
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
	int t = 1;
	//cin >> t;
	while(t--)	{
		subMain();
		cout << "\n";
	}	
	return 0;
}