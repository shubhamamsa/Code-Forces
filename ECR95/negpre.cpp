#include<bits/stdc++.h>
#define mod 1000000007

using namespace std;

void subMain()	{
	int n;
	cin >> n;
	int a[n], l[n];
	for(int i=0;i<n;i++)
		cin >> a[i];
	for(int i=0;i<n;i++)
		cin >> l[i];
	vector<int>temp;
	for(int i=0;i<n;i++)	{
		if(!l[i])
			temp.push_back(a[i]);
	}
	sort(temp.begin(), temp.end(), greater<int>());
	vector<int>finalArr;
	int x = 0;
	for(int i=0;i<n;i++)	{
		if(!l[i])
			finalArr.push_back(temp[x++]);
		else
			finalArr.push_back(a[i]);
	}
	for(int i=0;i<n;i++)
		cout << finalArr[i] << " ";
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