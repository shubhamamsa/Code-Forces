#include<iostream>

using namespace std;

int main()  {
    int n, team = 0, a=0,b=0,c=0;
    cin >> n;
    int t[n];
    for(int i=0;i<n;i++)    {
        cin >> t[i];
        if(t[i]==1)
            a++;
        else if(t[i]==2)
            b++;
        else
            c++;
    }
    if(a<b && a<c)
        team = a;
    else if(b<c)
        team = b;
    else
        team = c;
    cout << team << endl;
    for(int i=0;i<team;i++) {
        a = b = c = 0;
        for(int j=0;j<n;j++)    {
            if(a == 0 && t[j] == 1) {
                a = j+1;
                t[j]=0;
            }
            else if(b==0 && t[j] == 2)  {
                b = j+1;
                t[j]=0;
            }
            else if(c == 0 && t[j] == 3)    {
                c = j+1;
                t[j] = 0;
            }
        }
        cout << a << " " << b << " " << c << endl;
    }
    
    return 0;
}