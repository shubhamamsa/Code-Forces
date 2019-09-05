#include<iostream>
 
using namespace std;
 
int main()  {
    int n, j=3;
    cin >> n;
    string colors = "VIBGYOR", paint;
    for(int i=0;i<n;i++){
        if(i<7)
            paint.push_back(colors[i]);
        else    {
            paint.push_back(colors[j]);
            j++;
            if(j>=7)
                j=3;
        }
    }
    cout<<paint;
    return 0;
}
