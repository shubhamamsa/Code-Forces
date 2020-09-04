#include<bits/stdc++.h>
#define mod 1000000007

using namespace std;

void subMain()	{
	long long n, s, n1;
	cin >> n >> s;
	n1 = n;
	vector<int>digits;
	int sumdig = 0;
	while(n>0)	{
		digits.push_back(n%10);
		sumdig+=n%10;
		n = n/10;
	}
	if(sumdig<=s)	{
		cout << 0;
		return;
	}
	digits.push_back(0);
	int sum = 0;
	reverse(digits.begin(), digits.end());
	int k=0;	
	while(k<digits.size() && sum+digits[k] < s)	{
		sum+=digits[k];
		k++;
	}
	k--;
	digits[k]++;
	int t = k;
	while(t>0 && digits[t] > 9)	{
		int rem = digits[t]%10;
		digits[t] = rem;
		if(t>0)
		digits[t-1]++;
		t--;
	}
	for(int i=k+1;i<digits.size();i++)
		digits[i] = 0;
	//reverse(digits.begin(), digits.end());
	long long num = 0;
	for(int i=0;i<digits.size();i++)	{
		num=num*10+digits[i];
	}
	//cout << num << endl;
	cout << num-n1;
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