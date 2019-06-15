#include<iostream>

using namespace std;

int main()  {
    int n, k, t=0;
    cin >> n >> k;
    char s[101] = "", temp[101] = "";
    for(int i=0;i<n;i++)    {
        if(t-k==k)
            t=k;
        if(t<k) {
            s[i] = char(97+i);
            temp[i] = s[i];
            t++;
        }
        else    {
            s[i] = temp[t-k];
            t++;
        }
    }
    cout << s << endl;
    return 0;
}