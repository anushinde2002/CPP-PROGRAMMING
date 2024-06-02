/* */
#include<iostream>
using namespace std;
int main(){
    int i,j;
    int n,m;
    cout<<"Enter the value of n: ";
    cin>>n;
    cout<<"Enter the value of m: ";
    cin>>m;
    
    for(i=1;i<=n;i++){//rows
        for(j=1;j<=m;j++)//columns
        {
            if(i==1 || i==n ||j==1 ||j==m)
            cout<<"* ";
            else
            cout<<"  ";
        }
        cout<<endl;
    }
}
