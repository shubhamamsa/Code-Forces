#include<bits/stdc++.h>
#define mod 1000000007

using namespace std;

int findMax(int R1, int S1, int P1, int R2, int S2, int P2)	{
	int sum = 0;
	if(R1!=0 && S2!=0)
		sum+=min(R1, S2);
	if(S1!=0 && P2!=0)
		sum+=min(S1, P2);
	if(P1!=0 && R2!=0)
		sum+=min(P1, R2);
	return sum;
}
int findMin(int R1, int S1, int P1, int R2, int S2, int P2)	{
	int sum = 0;
	if(R1 >= P2)	{
		R1 -= P2;
		P2 = 0;
	}
	else	{
		R1 = 0;
		P2 -= R1;
	}
	if(S1 >= R2)	{
		S1-=R2;
		R2 = 0;
	}
	else	{
		S1 = 0;
		R2-=S1;
	}
	if(P1 >= S2)	{
		P1-=S2;
		S2=0;
	}
	else	{
		P1=0;
		S2-=P1;
	}
	if(R1 >= R2)	{
		R1 -= R2;
	}
	else
		R1=0;
	if(S1 >= S2)
		S1-=S2;
	else
		S1 = 0;
	if(P1 >= P2)
		P1-=P2;
	else
		P1 = 0;
	return P1+S1+R1;
}

void subMain()	{
	int n;
	cin >> n;
	int a1, a2, a3;
	int b1, b2, b3;
	cin >> a1 >> a2 >> a3;
	cin >> b1 >> b2 >> b3;
	int Min = findMin(a1, a2, a3, b1, b2, b3);
	int Max = findMax(a1, a2, a3, b1, b2, b3);	
	cout << Min <<" " << Max;
}

int main()	{
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
	int t = 1;
	//cin >> t;
	while(t--)	{
		subMain();
		cout << "\n";
	}	
	return 0;
}