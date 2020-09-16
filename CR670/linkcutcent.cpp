#include<bits/stdc++.h>
#define mod 1000000007

using namespace std;

int findMax(int arr[], int n)	{
	int max = 1;
	for(int i=2;i<=n;i++)
		if(arr[i] > arr[max])
			max = i;
	return max;
}

void subMain()	{
	int n;
	cin >> n;
	int x, y;
	int edges[n+1] = {0};
	vector<int>tree[n+1];
	for(int i=0;i<n-1;i++)	{
		cin >> x >> y;
		edges[x]++;
		edges[y]++;
		tree[x].push_back(y);
		tree[y].push_back(x);
	}
	int maxNode = findMax(edges, n);
	if(edges[maxNode] == n-1)	{
		if(maxNode == n)	{
			cout << maxNode << " " << 1 << endl;
			cout << maxNode << " " << 1 << endl;
		}
		else	{
			cout << maxNode << " " << maxNode+1 << endl;
			cout << maxNode << " " << maxNode+1 << endl;	
		}
		return;
	}
	else	{
		int secondNode = -1, thirdNode = -1;
		for(int i=1;i<=n;i++)	{
			if(secondNode!=-1 && thirdNode!=-1)
				break;
			if(i!=maxNode)	{
				for(int j=0;j<tree[i].size();j++)	{
					if(tree[i][j]!=maxNode && edges[tree[i][j]] == 1)	{
						secondNode = i;
						thirdNode = tree[i][j];
					}
				}
			}
		}
		cout << secondNode << " " << thirdNode << endl;
		cout << maxNode << " " << thirdNode;
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