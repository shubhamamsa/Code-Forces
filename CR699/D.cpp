#include<bits/stdc++.h>
#define mod 1000000007

using namespace std;

void subMain()	{
	int n, m;
	cin >> n >> m;
	string s[n];
	for(int i=0;i<n;i++)
		cin >> s[i];
	if(m%2 != 0)	{
		cout << "YES\n";
		for(int i=0;i<(m+1)/2;i++)
			cout << "1 2 ";
		return;
	}
	for(int i=0;i<n;i++)	{
		for(int j=0;j<n;j++)	{
			if(j!=i)	{
				if(s[i][j] == s[j][i])	{
					cout << "YES\n";
					for(int k=0;k<m/2;k++)	{
						cout << i+1 << " " << j+1 << " ";
					}
					cout << i+1;
					return;
				}
			}
		}
	}
	if(n > 2)	{
		int arr[3] = {0};
		if(s[0][1] == s[1][2])	{
			arr[0] = 1;
			arr[1] = 2;
			arr[2] = 3;
		}
		else if(s[0][2] == s[2][1])	{
			arr[0] = 1;
			arr[1] = 3;
			arr[2] = 2;
		}
		else if(s[1][0] == s[0][2])	{
			arr[0] = 2;
			arr[1] = 1;
			arr[2] = 3;
		}
		else if(s[1][2] == s[2][0])	{
			arr[0] = 2;
			arr[1] = 3;
			arr[2] = 1;
		}
		else if(s[2][0] == s[0][1])	{
			arr[0] = 3;
			arr[1] = 1;
			arr[2] = 2;
		}
		else if(s[2][1] == s[1][0])	{
			arr[0] = 3;
			arr[1] = 2;
			arr[2] = 1;
		}
		vector<int>first, second;
		int flag = -1;
		for(int i=0;i<(m-2)/2;i++)	{
			if(flag == -1)
				second.push_back(arr[1]);
			else
				second.push_back(arr[2]);
			flag*=-1;
		}
		flag = -1;
		for(int i=0;i<(m-2)/2;i++)	{
			if(flag == -1)
				first.push_back(arr[1]);
			else
				first.push_back(arr[0]);
			flag*=-1;
		}
		cout << "YES\n";
		for(int i=first.size()-1;i>=0;i--)
			cout << first[i] << " ";
		cout << arr[0] << " " << arr[1] << " " << arr[2] << " ";
		for(int i=0;i<second.size();i++)
			cout << second[i] << " ";
		return;
	}
	cout << "NO";
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