#include<bits/stdc++.h>
#define mod 1000000007

using namespace std;

void subMain()	{
	long long n, m;
	cin >> n >> m;
	int a[n];
	for(int i=0;i<n;i++)
		cin >> a[i];
	int b[n];
	for(int i=0;i<n;i++)
		cin >> b[i];
	int c[m];
	for(int i=0;i<m;i++)
		cin >> c[i];
	map<int, set<int>>uncolored;
	map<int, set<int>>colored;
	vector<int>index;
	for(int i=0;i<n;i++)	{
		if(a[i] == b[i])
			colored[b[i]].insert(i+1);
		else
			uncolored[b[i]].insert(i+1);
	}
	for(int i=0;i<m;i++)	{
		if(uncolored.size() == 0)	{
			if(colored.find(c[i]) == colored.end())	{
				if(uncolored.find(c[m-1]) != uncolored.end())	{
					index.push_back(*uncolored[c[m-1]].begin());
				}
				else if(colored.find(c[m-1]) != colored.end())	{
					int x = *colored[c[m-1]].begin();
					index.push_back(x);	
					colored[c[m-1]].erase(x);
					uncolored[c[m-1]].insert(x);
				}
				else	{
					cout << "NO";
					return;
				}
			}
			else
				index.push_back(*colored[c[i]].begin());
		}
		else if(uncolored.find(c[i]) == uncolored.end())	{
			auto i = uncolored.begin();
			index.push_back(*(i->second.begin()));
		}
		else	{
			int x = *uncolored[c[i]].begin();
			index.push_back(x);
			uncolored[c[i]].erase(x);
			colored[c[i]].insert(x);
			if(uncolored[c[i]].size() == 0)	{
				uncolored.erase(c[i]);
			}
		}
	}
	if(uncolored.size() != 0)	{
		cout << "NO";
		return;
	}
	cout << "YES\n";
	for(int i=0;i<index.size();i++)
		cout << index[i] << " ";
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