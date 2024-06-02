/* half triangle pattern*/

#include<iostream>
using namespace std;
int main(){
    int i,j;
    int m;
    cout<<"Enter the value of m: ";
    cin>>m;
    
    for(i=4;i>=1;--i){
        for(j=4;j>=i;--j)
        {
            cout<<j;
        }
        cout<<endl;
    }
    
}