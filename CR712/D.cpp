#include<bits/stdc++.h>
#define mod 1000000007

using namespace std;

void subMain()	{
    int n;
    cin >> n;
    int alice;
    int oddi = 1, oddj = 2, eveni=1, evenj = 1;
    for(int i=0;i<n;i++)    {
        for(int j=0;j<n;j++)    {
            cin >> alice;
            if(eveni == n+1)  {
                if(alice == 1)  {
                    cout << 3 << " " << oddi << " " << oddj << endl;
                    oddj+=2;
                    if(oddj > n)    {
                        oddi ++;
                        if(oddi%2 == 0)
                        oddj = 1;
                        else
                            oddj = 2;
                    }
                }
                else {
                    cout << 1 << " " << oddi << " " << oddj << endl;
                    oddj+=2;
                    if(oddj > n)    {
                        oddi ++;
                        if(oddi%2 == 0)
                        oddj = 1;
                        else
                            oddj = 2;
                    }
                }
            }
            else if(oddi == n+1)  {
                if(alice == 2)  {
                    cout << 3 << " " << eveni << " " << evenj << endl;
                    evenj+=2;
                    if(evenj > n)    {
                        eveni ++;
                        if(eveni%2 == 0)
                        evenj = 2;
                        else
                            evenj = 1;
                    }
                }
                else {
                    cout << 2 << " " << eveni << " " << evenj << endl;
                    evenj+=2;
                    if(evenj > n)    {
                        eveni ++;
                        if(eveni%2 == 0)
                        evenj = 2;
                        else
                            evenj = 1;
                    }
                }    
            }
            else    {
                if(alice == 1)  {
                    cout << 2 << " " << eveni << " " << evenj << endl;
                    evenj+=2;
                    if(evenj > n)    {
                        eveni ++;
                        if(eveni%2 == 0)
                        evenj = 2;
                        else
                            evenj = 1;
                    }
                }
                else {
                    cout << 1 << " " << oddi << " " << oddj << endl;
                    oddj+=2;
                    if(oddj > n)    {
                        oddi ++;
                        if(oddi%2 == 0)
                        oddj = 1;
                        else
                            oddj = 2;
                    }
                }
            }
        }
    }
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