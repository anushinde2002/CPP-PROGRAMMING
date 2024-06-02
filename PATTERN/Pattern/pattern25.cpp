/* half triangle pattern*/

#include<iostream>
using namespace std;
int main(){
    int i,j;
    int m;
    cout<<"Enter the value of m: ";
    cin>>m;
    
    for(i=1;i<=m;i++){
        for(j=1;j<=m-i+1;j++)
        {
            // cout<<(char)(j+64);
            //cout<<(char)(i+64);
            //cout<<(char)(i+96);
            cout<<(char)(j+96);
        }
        cout<<endl;
    }
}