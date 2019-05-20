#include<iostream>

using namespace std;

int main()  {
    int w, y, chance, x=6;
    cin >> w >> y;
    if(w>=y)
        chance = 7-w;
    else    
        chance = 7-y;
    for(int i=2;i<=chance;i++)  {
        if(chance%i==0 && x%i==0)   {
            chance/=i;
            x/=i;
        }
    }
    cout << chance << "/" << x << endl;
    
    return 0;
}