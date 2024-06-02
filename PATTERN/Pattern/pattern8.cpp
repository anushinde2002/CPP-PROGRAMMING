/*half triangle pyramid*/

#include<iostream>
using namespace std;
int main(){
    int i,j;
    int m;
    cout<<"Enter the value of m: ";
    cin>>m;
    
    for(i=1;i<=4;i++){
        for(j=1;j<=i;j++)
        {
            cout<<(char)(i+96);
        }
        cout<<endl;
    }
}