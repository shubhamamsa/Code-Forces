#include<iostream>
 
using namespace std;
 
int main()  {
    
    long long n;
    cin >> n;
    long long a[n];
    for(long long i=0;i<n;i++)
        cin >> a[i];
    long long start = 0, end = 0, check = 0;
    for(long long i=0;i<n-1;i++)  {
        if(start == 0 && a[i]>a[i+1])   {
            start = ++i;
            while(a[i]>=a[i+1] && i<n-1)  {
                i++;
            }
            end = i+1;
        }
        if(start != 0 && a[i] > a[i+1]) {
            check++;
        }
    }
    
        if((a[start-1] > a[end]) && start != 0)
            check++;
        if(start>1 && a[start-2] > a[end-1])
            check++;
        if(check == 0 && start == 0)  {
            cout << "yes\n" << 1 << " " << 1;
        }
        else if(check == 0)
            cout << "yes\n" << start << " " << end;
        else if(check!=0)
            cout << "no";
    return 0;
}
