/* */
#include<iostream>
using namespace std;
int main(){
    int i,j;
    int m;
    cout<<"Enter the value of m: ";
    cin>>m;
    int mid=(m/2)+1;
    for(i=1;i<=m;i++){
        for(j=1;j<=m;j++)
        {
            
            if(i==mid || j==mid){
            cout<<"* ";
        
            }
            else
            cout<<"  ";
        }
        cout<<endl;
    }
}
