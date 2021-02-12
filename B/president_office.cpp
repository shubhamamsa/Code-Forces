#include<iostream>
 
using namespace std;
 
void count(string s)    {
    int count = 0, flag;
    for(int i=0;i<s.length();i++)   {
        flag = 0;
        for(int j=0;j<i;j++) 
            if(s[i] == s[j])
                flag = 1;
        if(flag == 0)
            count++;
    }
    cout << count;
}
 
int main()  {
    int m, n;
    char p;
    string s = "";
    cin >> m >> n >> p;
    string a[m];
    cin.ignore();
    for(int i=0;i<m;i++)    {
            getline(cin, a[i]);
    }
    for(int i=0;i<m;i++)  {
        for(int j=1;j<n;j++)  {
            if(a[i][j-1] == p && a[i][j] != p && a[i][j] != '.')
                s.push_back(a[i][j]);
            else if(a[i][j-1] != p && a[i][j-1] != '.' && a[i][j] == p)
                s.push_back(a[i][j-1]);
        }
    }
    for(int j=0;j<n;j++)    {
        for(int i=1;i<m;i++)    {
            if(a[i-1][j] == p && a[i][j] != p && a[i][j] != '.')
                s.push_back(a[i][j]);
            else if(a[i-1][j] != p && a[i-1][j] != '.' && a[i][j] == p)
                s.push_back(a[i-1][j]);
        }
    }
    count(s);
    return 0;
}
