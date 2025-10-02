#include<bits/stdc++.h>
using namespace std;
int main(){

    int n;
    cout<<"ENter a number ";
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        //spaces
        for (int j =0; j<i; j++)
        {
            cout << " ";
        }
        // stars
        for (int j = 0; j<2*n-2*i-1; j++)
        {
            cout <<"*";
            
        }
        

        // spaces
        for (int j =0; j<i; j++)
        {
            cout << " ";
        }

        cout<< endl;
    }
    

    return 0;
}