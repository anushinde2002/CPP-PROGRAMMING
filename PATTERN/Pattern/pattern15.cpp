/* */
#include<iostream>
using namespace std;
int main(){
    int i,j;
    int m;
    cout<<"Enter the value of m: ";
    cin>>m;
    int a=1;
    
    for(i=1;i<=m;i++){
        for(j=1;j<=i;j++)
        {
            if((i+j)%2==0)
            cout<<1;
            else
            cout<<0;
            
        }
        cout<<endl;
    }
    
}