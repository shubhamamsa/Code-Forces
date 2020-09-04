#include<bits/stdc++.h>
#define mod 1000000007

using namespace std;

pair<int, int>findpair(int a[], int l, int r, int x)	{
	int min=l, max=l;
	int minans=l, maxans = l, maxlen = 0;
	while(max<=r)	{
		if(a[max]-a[min] > x)
			min++;
		else	{
			if(a[max]-a[min]<=x && max-min > maxlen)	{
				maxans = max;
				minans = min;
				maxlen = max-min;
			}
			else if(a[max]-a[min]<=x)
				max++;
		}
	}
	return make_pair(minans, maxans);
}

void subMain()	{
	int n, k;
	cin >> n >> k;
	int x[n];
	for(int i=0;i<n;i++)
		cin >> x[i];
	int y[n];
	for(int i=0;i<n;i++)
		cin >> y[i];
	sort(x, x+n);
	if(n == 1)	{
		cout << 1;
		return;
	}
	pair<int, int>pair1;
	pair1 = findpair(x, 0, n-1, k);
	int sum = pair1.second-pair1.first+1;
	pair<int, int>pair2, pair3;
	if(pair1.first==0)	{
		pair2 = findpair(x, pair1.second+1, n-1, k);
		sum+=pair2.second-pair2.first+1;
	}
	else if(pair1.second == n-1)	{
		pair2 = findpair(x, 0, pair1.first-1, k);
		sum+=pair2.second-pair2.first+1;
	}
	else	{
		pair2 = findpair(x, 0, pair1.first-1, k);
		pair3 = findpair(x, pair1.second+1, n-1, k);
		sum+=max(pair2.second-pair2.first+1, pair3.second-pair3.first+1);
	}
	cout << sum;
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