#include<bits/stdc++.h>
#define mod 1000000007

using namespace std;

void subMain()	{
	int n;
	cin >> n;
	long long d[2*n];
	for(int i=0;i<2*n;i++)
		cin >> d[i];
	map<long long, long long>count;
	for(int i=0;i<2*n;i++)
		count[d[i]]++;
	vector<long long>elements;
	for(auto i: count)	{
		if(i.first == 0)	{
			cout << "NO";
			return;
		}
		if(i.second != 2)	{
			cout << "NO";
			return;
		}
		elements.push_back(i.first);
	}
	sort(elements.begin(), elements.end(), greater<long long>());
	int dig = 2*n;
	long long sum = 0;
	for(int i=0;i<elements.size();i++)	{
		if((elements[i]-sum)%dig != 0)	{
			cout << "NO";
			return;
		}
		else {
			if((elements[i]-sum) <= 0)	{
				cout << "NO";
				return;
			}
			sum += 2*(elements[i]-sum)/dig;
			dig-=2;
		}
	}
	cout << "YES";
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