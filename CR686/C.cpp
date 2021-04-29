#include<bits/stdc++.h>
#define mod 1000000007

using namespace std;

void subMain()	{
	int n;
	cin >> n;
	int a[n];
	for(int i=0;i<n;i++)
		cin >> a[i];
	vector<int>distincts;
	distincts.push_back(a[0]);
	for(int i=1;i<n;i++)	{
		if(a[i]!=a[i-1])
			distincts.push_back(a[i]);
	}
	map<int, int>val;
	for(int i=0;i<distincts.size();i++)
		val[distincts[i]]++;
	int min = 1000000000, mini;
	val[distincts[0]]--;
	val[distincts[distincts.size()-1]]--;
	for(auto i: val)	{
		if(i.second < min)
			min  = i.second;
			mini = i.first;
	}
	if(val.size() == 1)
		cout << 0;
	else	{
		cout << min+1;
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