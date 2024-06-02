/* */
#include<iostream>
using namespace std;
int main(){
    int i,j;
    int m;
    cout<<"Enter the value of m: ";
    cin>>m;
    
    for(i=1;i<=m;i++){
        for(j=1;j<=m;j++)
        {
            cout<<"*";
        }
        cout<<endl;
    }
}