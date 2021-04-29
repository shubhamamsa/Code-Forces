#include<bits/stdc++.h>
#define mod 1000000007

using namespace std;

bool check(vector<int>set, int n, int sum) 
{ 

    bool subset[n + 1][sum + 1]; 
    for (int i = 0; i <= n; i++) 
        subset[i][0] = true; 
    for (int i = 1; i <= sum; i++) 
        subset[0][i] = false; 
    for (int i = 1; i <= n; i++) { 
        for (int j = 1; j <= sum; j++) { 
            if (j < set[i - 1]) 
                subset[i][j] = subset[i - 1][j]; 
            if (j >= set[i - 1]) 
                subset[i][j] = subset[i - 1][j] 
                               || subset[i - 1][j - set[i - 1]]; 
        } 
    } 
    return subset[n][sum]; 
}

void subMain()	{
	int n, m, k;
	cin >> n >> m >> k;
	int a[n][m];
	for(int i=0;i<n;i++)
		for(int j=0;j<m;j++)
			cin >> a[i][j];
	int sum[n] = {0};
	int totalSum = 0, maxTotalsum = 0;
	for(int i=0;i<n;i++)	{
		sort(a[i], a[i]+m, greater<int>());
		for(int j=0;j<m/2;j++)
			sum[i]+=a[i][j];
		totalSum+=sum[i];
	}
	vector<int>sr;
	for(int i=0;i<n;i++)	{
		for(int j=0;j<m/2;j++)	{
			for(int k=m/2;k<m;k++)
				sr.push_back(a[i][j]-a[i][k]);
				sr.push_back(a[i][j]);
		}
	}
	maxTotalsum = totalSum;
	if(totalSum%k == 0)	{
		cout << totalSum;
		return;
	}
	totalSum -= totalSum%k;
	for(int i=totalSum;i>=0;i-=k)	{
		if(check(sr, sr.size(), maxTotalsum-i))	{
			cout << i;
			return;
		}
	}
	cout << 0;
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