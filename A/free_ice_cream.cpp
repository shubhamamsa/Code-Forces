#include<iostream>

using namespace std;

int main()  {
    
    long long n, x, d, distress_children = 0;
    char c;
    cin >> n >> x;
    for(long long i=0;i<n;i++)    {
        cin >> c >> d;
        if(c == '+')
            x+=d;
        else    {
            if(x>=d)
                x-=d;
            else
                distress_children++;
        }
    }
    cout << x <<" "<< distress_children << endl;
    
    return 0;
}