#include<bits/stdc++.h>
#define mod 1000000007

using namespace std;

void subMain()	{
	int n, l;
	cin >> n >> l;
	int a[n];
	for(int i=0;i<n;i++)
		cin >> a[i];
	double timeA[n+1];
	int speedA = 1;
	for(int i=0;i<n;i++)	{
		if(i == 0)
			timeA[i] = (a[i]*1.0)/(speedA*1.0);
		else	{
			timeA[i] = ((a[i]-a[i-1])*1.0)/(speedA*1.0)+timeA[i-1];
		}
		speedA++;
	}
	timeA[n] = timeA[n-1]+((l-a[n-1])*1.0)/(speedA*1.0);

	double timeB[n+1];
	int speedB = 1;
	timeB[n] = ((l-a[n-1])*1.0)/(speedB*1.0);
	speedB++;
	for(int i=n-2;i>=0;i--)	{
			timeB[i+1] = ((a[i+1]-a[i])*1.0)/(speedB*1.0)+timeB[i+2];
		speedB++;
	}
	timeB[0] = timeB[1]+((a[0])*1.0)/(speedB*1.0);
	double finalTime, initPos, finalPos, vA, vB;
	for(int i=0;i<n+1;i++)	{
		if(timeA[i] >= timeB[i])	{
			if(i == 0)
				initPos = 0;
			else
				initPos = a[i-1];
			if(i == n)
				finalPos = l;
			else
				finalPos = a[i];
			vA = i+1;
			vB = n-i+1;
			finalTime = timeA[i-1];
			break;
		}
	}
	//cout << initPos << " " << finalPos << " " << vA << " " <<vB << " " << finalTime;
	cout << finalTime+((finalPos-initPos)/(1.0+vB/vA))/vA;
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