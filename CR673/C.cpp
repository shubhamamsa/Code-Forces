#include<bits/stdc++.h>
#define mod 1000000007

using namespace std;

void subMain()	{
	int n;
	cin >> n;
	int a[n], b[n];
	for(int i=0;i<n;i++)
		b[i] = -1;
	map<int, int>index, repeat;
	for(int i=0;i<n;i++)	{
		cin >> a[i];
	}
	int minimum = a[n/2];
	for(int i=n/2;i<n;i++)	{
		minimum = min(minimum, a[n-i-1]);
		b[i] = minimum;
	}
	for(int i=0;i<n;i++)	{
		if(index.find(a[i]) == index.end())	{
			index[a[i]] = i;
			repeat[a[i]] = i+1;
		}
		else	{
			if(repeat.find(a[i]) == repeat.end())
				repeat[a[i]] = i-index[a[i]];
			else	{
				if(repeat[a[i]] < i-index[a[i]])
					repeat[a[i]] = i-index[a[i]];
			}
			index[a[i]] = i;
		}
	}
	for(auto i: repeat)	{
		if(i.second < n-index[i.first])
			i.second = n-index[i.first];
		if(b[i.second-1] == -1)
			b[i.second-1] = i.first;
		else if(b[i.second-1] > i.first)
			b[i.second-1] = i.first;
	}
	minimum = -1;
	for(int i=0;i<n;i++)	{
		if(b[i]!=-1)	{
			if(minimum == -1)
				minimum = b[i];
			else if(minimum > b[i])
				minimum = b[i];
		}
		cout << minimum << " ";
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