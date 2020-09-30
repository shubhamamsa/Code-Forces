#include<bits/stdc++.h>
#define mod 1000000007

using namespace std;

void subMain()	{
	int n, m;
	cin >> n >> m;
	int tiles[n][2][2];
	int u, v, w, y;
	for(int i=0;i<n;i++)	{
		cin >> u >> v >> w >> y;
		tiles[i][0][0] = u;
		tiles[i][0][1] = v;
		tiles[i][1][0] = w;
		tiles[i][1][1] = y;
	}
	if(m%2!=0)	{
		cout << "NO";
		return;
	}
	else {
		int flag = 1;
		for(int i=0;i<n;i++)	{
			if(tiles[i][0][1] == tiles[i][1][0])	{
				flag = -1;
				break;
			}
		}
		if(flag == 1)
			cout << "NO";
		else
			cout << "YES";
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