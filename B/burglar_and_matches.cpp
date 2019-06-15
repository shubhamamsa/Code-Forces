#include<iostream>

using namespace std;

int main()  {
    
    unsigned int n, i , j, temp1, temp2, sum = 0, sum1 = 0;
    int m;
    cin >> n >> m;
    int a[m][2];
    for(i=0;i<m;i++)
        cin >> a[i][0] >> a[i][1];
    for(i=1;i<m;i++)    {
        temp1 = a[i][0];
        temp2 = a[i][1];
        j = i;
        while(j>0)  {
            if(temp2<a[j-1][1]){
                a[j][0] = a[j-1][0];
                a[j][1] = a[j-1][1];
            }
            else
                break;
            j--;
        }
        a[j][0] = temp1;
        a[j][1] = temp2;
    }
    for(int i = m-1;i>=0;i--)   {
        sum1+=a[i][0];
        if(n<=sum1){
            sum1 = sum1-n;
            sum+=(a[i][0]-sum1)*a[i][1];
            break;
        }
        else if(n>sum1)
            sum+=a[i][0]*a[i][1];
    }
    cout << sum;
    return 0;
}