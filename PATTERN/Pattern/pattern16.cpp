/* half triangle pattern*/

#include<iostream>
using namespace std;
int main(){
    int i,j;
    int m;
    cout<<"Enter the value of m: ";
    cin>>m;
    
    // for(i=1;i<=m;i++){
    //     for(j=1;j<=i;j++)
    //     {
    //         cout<<2*j-1;
    //     }
    //     cout<<endl;
    // }
    for(i=1;i<=m;i++){
        int a=1;
        for(j=1;j<=i;j++)
        {
            cout<<a<<" ";
            a+=2;
        }
        cout<<endl;
    }
    
}