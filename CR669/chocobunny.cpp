#include<bits/stdc++.h>
#define mod 1000000007

using namespace std;

void subMain()	{
	int n;
	cin >> n;
	int modulo;
	int arr[n] = {0};
	int modulo1, modulo2;
	int index = 1;
	for(int i=2;i<=n;i++)	{
		cout << "? " << i << " " << index << endl;
		cout.flush();
		cin >> modulo1;
		cout << "? " << index << " " << i << endl;
		cout.flush();
		cin >> modulo2;
		if(modulo1 > modulo2)
			arr[i-1] = modulo1;
		else	{
			arr[index-1] = modulo2;
			index = i;
		}
	}	
	cout << "! ";
	for(int i=0;i<n;i++)	{
		if(arr[i] == 0)
			cout << n << " ";
		else
			cout << arr[i] << " ";
	}
	cout << endl;
	cout.flush();
	int test;
	cin >> test;
	if(test == -1)
		return;
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