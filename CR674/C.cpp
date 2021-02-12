#include<bits/stdc++.h>
#define mod 1000000007

using namespace std;

void subMain()	{
	int n;
	cin >> n;
	if(n == 1)	{
		cout << 0;
		return;
	}
	int steps = 0, tempSteps = 0, minSteps = 100000000, flag = -1;
	int k = 0;
	while(k<=100000)	{
		tempSteps = steps;
		tempSteps += (n/(steps+1))-1;
		if(n%(steps+1)!=0)
			tempSteps++;
		if(minSteps > tempSteps)
			minSteps = tempSteps;
		k++;
		steps++;
	}
	cout << minSteps;
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
