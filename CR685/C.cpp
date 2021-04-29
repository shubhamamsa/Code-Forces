#include<bits/stdc++.h>
#define mod 1000000007

using namespace std;

void subMain()	{
	int n, k;
	cin >> n >> k;
	string a, b;
	cin >> a >> b;
	map<char, int>fora, forb;
	for(int i=0;i<n;i++)
		fora[a[i]]++;
	for(int i=0;i<n;i++)
		forb[b[i]]++;
	sort(a.begin(), a.end());
	sort(b.begin(), b.end());
	string new1 = "", new2="";
	for(int i=0;i<n;i++)	{
		if(forb.find(a[i])!=forb.end() && forb[a[i]]!=0)
			forb[a[i]]--;
		else
			new1+=a[i];
	}
	for(int i=0;i<n;i++)	{
		if(fora.find(b[i])!=fora.end() && fora[b[i]]!=0)
			fora[b[i]]--;
		else
			new2+=b[i];
	}
	//cout << new1 << " " << new2;
	map<char, int>map1, map2;
	for(int i=0;i<new1.length();i++)
		map1[new1[i]]++;
	for(int i=0;i<new2.length();i++)
		map2[new2[i]]++;
	for(auto i: map1)	{
		if(i.second%k!=0)	{
			cout << "No";
			return;
		}
	}
	for(auto i: map2)	{
		if(i.second%k!=0)	{
			cout << "No";
			return;
		}
	}
	for(int i=0;i<new1.length();i++)
		if(new1[i] > new2[i])	{
			cout << "No";
			return;
		}
	cout << "Yes";
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