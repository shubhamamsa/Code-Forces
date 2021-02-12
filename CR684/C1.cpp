#include<bits/stdc++.h>
#define mod 1000000007

using namespace std;

int count = 0;
int opr[20000][6];

void check(char &x)	{
	if(x == '1')
		x = '0';
	else
		x = '1';
}

void add(string a[], int i1, int i2, int j1, int j2, int n, int m)	{
	int rcount = 0;
	if(a[i1][j1] == '1')
		rcount++;
	if(a[i1][j2] == '1')
		rcount++;
	if(a[i2][j1] == '1')
		rcount++;
	if(a[i2][j2] == '1')
		rcount++;
	if(rcount == 3)	{
		int lamp = 0;
		if(a[i1][j1] == '1')	{
			opr[::count][lamp++] = i1;
			opr[::count][lamp++] = j1;
			check(a[i1][j1]);	
		}
		if(a[i1][j2] == '1')	{
			opr[::count][lamp++] = i1;
			opr[::count][lamp++] = j2;
			check(a[i1][j2]);	
		}
		if(a[i2][j1] == '1')	{
			opr[::count][lamp++] = i2;
			opr[::count][lamp++] = j1;
			check(a[i2][j1]);	
		}
		if(a[i2][j2] == '1')	{
			opr[::count][lamp++] = i2;
			opr[::count][lamp++] = j2;
			check(a[i2][j2]);	
		}
		::count++;
		return;
	}
	if(a[i1][j1] == '0' && i1 != n-2 && j1 != m-2)
		return;
	if(rcount == 0)
		return;
	else if(rcount == 1)	{
		if(a[i1][j1] == '1')	{
			opr[::count][0] = i1;
			opr[::count][1] = j1;
			opr[::count][2] = i1;
			opr[::count][3] = j2;
			opr[::count][4] = i2;
			opr[::count][5] = j1;
			check(a[i1][j1]);
			check(a[i1][j2]);
			check(a[i2][j1]);
		}
		else	{
			opr[::count][0] = i1;
			opr[::count][1] = j2;
			opr[::count][2] = i2;
			opr[::count][3] = j1;
			opr[::count][4] = i2;
			opr[::count][5] = j2;
			check(a[i1][j2]);
			check(a[i2][j1]);
			check(a[i2][j2]);	
		}
	}
	else if(rcount == 2)	{
		int flag = 0, lamp = 0;
		if(a[i1][j1] == '1')	{
			flag = 1;
			opr[::count][lamp++] = i1;
			opr[::count][lamp++] = j1;
			check(a[i1][j1]);
		}
		else	{
			opr[::count][lamp++] = i1;
			opr[::count][lamp++] = j1;
			check(a[i1][j1]);	
		}
		if(a[i1][j2] == '1')	{
			if(flag!=1)	{
			flag = 1;
			opr[::count][lamp++] = i1;
			opr[::count][lamp++] = j2;
			check(a[i1][j2]);
		}
		}
		else	{
			opr[::count][lamp++] = i1;
			opr[::count][lamp++] = j2;
			check(a[i1][j2]);	
		}
		if(a[i2][j1] == '1')	{
			if(flag != 1)	{
			flag = 1;
			opr[::count][lamp++] = i2;
			opr[::count][lamp++] = j1;
			check(a[i2][j1]);
		}
		}
		else	{
			opr[::count][lamp++] = i2;
			opr[::count][lamp++] = j1;
			check(a[i2][j1]);	
		}
		if(a[i2][j2] == '1')	{
			if(flag != 1)	{
				flag = 1;
				opr[::count][lamp++] = i2;
				opr[::count][lamp++] = j2;
				check(a[i2][j2]);
			}
		}
		else	{
			opr[::count][lamp++] = i2;
			opr[::count][lamp++] = j2;
			check(a[i2][j2]);	
		}
	}
	else if(rcount == 3)	{
		int lamp = 0;
		if(a[i1][j1] == '1')	{
			opr[::count][lamp++] = i1;
			opr[::count][lamp++] = j1;
			check(a[i1][j1]);	
		}
		if(a[i1][j2] == '1')	{
			opr[::count][lamp++] = i1;
			opr[::count][lamp++] = j2;
			check(a[i1][j2]);	
		}
		if(a[i2][j1] == '1')	{
			opr[::count][lamp++] = i2;
			opr[::count][lamp++] = j1;
			check(a[i2][j1]);	
		}
		if(a[i2][j2] == '1')	{
			opr[::count][lamp++] = i2;
			opr[::count][lamp++] = j2;
			check(a[i2][j2]);	
		}
	}
	else 	{
		opr[::count][0] = i1;
		opr[::count][1] = j1;
		opr[::count][2] = i1;
		opr[::count][3] = j2;
		opr[::count][4] = i2;
		opr[::count][5] = j1;
		check(a[i1][j1]);
		check(a[i1][j2]);
		check(a[i2][j1]);
	}
	::count++;
	if(i1!=n-2 && j1!=m-2)
		return;
	add(a, i1, i2, j1, j2, n, m);
}

void subMain()	{
	::count = 0;
	int n, m;
	cin >> n >> m;
	string s[n];
	for(int i=0;i<n;i++)
		cin>>s[i];
	for(int i=0;i<n-1;i++)	{
		for(int j=0;j<m-1;j++)	{
			add(s, i, i+1, j, j+1, n, m);
		}
	}

	cout << ::count << "\n";
	for(int i=0;i<::count;i++)	{
		for(int j=0;j<6;j++)
			cout << opr[i][j]+1 << " ";
		cout << "\n";
	}
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