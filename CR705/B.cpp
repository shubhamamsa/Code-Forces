#include<bits/stdc++.h>
#define mod 1000000007

using namespace std;

bool perfect(int n, int m)	{
	int x = n;
	while(x > 0)	{
		int temp = x%10;
		x/=10;
		if(temp == 3 || temp == 4 || temp == 6 || temp == 7 || temp == 9)
			return false;
	}
	int temp = 0;
	int lambda = n;
	while(n > 0)	{
		int temp1 = n%10;
		if(temp1 == 2)
			temp += 5;
		else if(temp1 == 5)
			temp+=2;
		else
			temp += temp1;
		temp*=10;
		n/=10;
	}
	if(lambda > 9)
		temp/=10;
	if(temp >= m)
		return false;


	return true;
}

void subMain()	{
	int h, m;
	cin >> h >> m;
	string time;
	cin >> time;
	string hr = time.substr(0, 2), mn = time.substr(3, 2);
	int hour = stoi(hr), min = stoi(mn);
	while(!(perfect(hour, m) && perfect(min, h)))	{
		min++;
		if(min >= m)	{
			min = 0;
			hour++;
			if(hour >= h)	{
				hour = 0;
			}
		}
	}
	if(hour < 10)	{
		cout << 0 << hour;
	}
	else
		cout << hour;
	cout << ":";
	if(min < 10)	{
		cout << 0 << min;
	}
	else
		cout << min;

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