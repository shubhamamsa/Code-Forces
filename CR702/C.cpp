#include<bits/stdc++.h>
#define mod 1000000007

using namespace std;
set<long long>cubes;
void countcubes()	{
	for(long long i=1;i<=10000;i++)
		cubes.insert(i*i*i);
}
void subMain()	{
	long long x;
	cin >> x;
	for(auto i: cubes)	{
		if(i >= x)
			break;
		// cout << i << " ";
		if(cubes.find(x-i) != cubes.end())	{
			cout << "YES";
			return;
		}
	}
	cout << "NO";
}

int main()	{
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    countcubes();
	int t = 1;
	cin >> t;
	while(t--)	{
		subMain();
		cout << "\n";
	}	
	return 0;
}