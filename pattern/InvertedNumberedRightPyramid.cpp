#include<bits/stdc++.h>
using namespace std;
int main(){

    int n;
    cout<<"ENter a number ";
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        for (int j = n; j>i; j--)
        {
            cout << n-j+1 ;
        }
        cout<< endl;
    }
    

    return 0;
}