#include<bits/stdc++.h>
#define mod 1000000007

using namespace std;

int main()
{
    int t;
    cin >> t;
    while(t)
    {
        int l;
        cin>>l;
        string str;
        cin >> str;
        // l=str.size();
        int a = 0;
        int b=0, flag = 0;
        for (int i = 0; i<l; i++)
        {
            if (str[i] == '1')
            {
                a++; 
            }
            else{
                b++;
            }
           if (a >= b)
        {
            cout << "YES";
            flag = 1;
             break;
        }
        }
        if(!flag)
        {
            cout << "NO";
        }
cout << endl;
        --t;
    }
    return 0;
}