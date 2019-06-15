#include<iostream>

using namespace std;

int main()  {
    
    int n, count, max = 0;
    cin >> n;
    int a[n];
    for(int i=0;i<n;i++)
        cin >> a[i];
    for(int i = 0; i<n; i++)    {
        int j = i, k = i;
        count = 1;
        while(j>0 || k<n-1) {
            if(j>0){
            if(a[j]>=a[j-1]){
                count++;
                j--;
            }}
            if(k<n-1)  {
                if(a[k]>=a[k+1])    {
                    count++;
                    k++;
                }    }
        
            if(a[k]<a[k+1] && a[j]<a[j-1])
                break;
        }
        if(count>max)
            max=count;
    }
    cout << max << endl;
    return 0;
}