#include<iostream>

using namespace std;

int big(int a, int b){
    if(a>b)
        return a;
    else
        return b;
}

int main()  {
    int n, a, count=0;
    cin >> n >> a;
    int t[n];
    for(int i=0;i<n;i++)
        cin >> t[i];
    a--;
    if(t[a] == 1)
        count++;
    for(int i = 1; i<big(a+1, n-a);i++) {
        if((a-i)>=0 && (a+i)<n) {
            if(t[a-i] == 1 && t[a+i] == 1)
                count+=2;
        }
        if((a-i)<0 && t[a+i] == 1)
            count++;
        if(a+i>=n && t[a-i] == 1)
            count++;
    }
    cout << count << endl;
    
    return 0;
}