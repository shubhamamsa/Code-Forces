#include<bits/stdc++.h>
#define mod 1000000007

using namespace std;

void subMain()	{
	int n, m;
	cin >> n >> m;
	string s;
	cin >> s;
	pair<int, int>maxmin[n];
	int arr[n] = {0};
	if(s[0] == '-')
			arr[0] = -1;
		else
			arr[0] = 1;
	for(int i=1;i<n;i++)	{
		if(s[i] == '-')
			arr[i] = arr[i-1]-1;
		else
			arr[i] = arr[i-1]+1;
	}
	int maxi = 0, mini = 0, mark = 0;
	for(int i=0;i<n;i++)	{
		if(s[i] == '-')
			mark--;
		else
			mark++;
		if(maxi < mark)
			maxi = mark;
		if(mini > mark)
			mini = mark;
		maxmin[i] = make_pair(mini, maxi);
	}
	// for(int i=0;i<n;i++)
	// 	cout << maxmin[i].first << " " <<maxmin[i].second << endl;
	int l, r;
	while(m--)	{
		cin >> l >> r;
		l--;
		r--;
		if(l == 0 && r == n-1)	{
			cout << 1 << "\n";
			continue;
		}
		else if(r == n-1)	{
			cout << maxmin[l-1].second-maxmin[l-1].first+1 << "\n";
			continue;
		}
		else if(l == 0)	{
			int num = 1;
			if(maxmin[n-1].second-maxmin[r].second >= 0)
				num++;
			cout << maxmin[n-1].second-maxmin[r].second-(maxmin[n-1].first-maxmin[r].first)+num << "\n";
			continue;
		}
		else
			cout << max(maxmin[l-1].second, maxmin[n-1].second-(arr[r]-arr[l-1]))-min(maxmin[l-1].first, maxmin[n-1].first-(arr[r]-arr[l-1]))+1 <<"\n";
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