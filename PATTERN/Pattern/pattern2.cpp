/*pyramid ABCD*/
#include<iostream>
using namespace std;
int main(){
    int i,j;
    int n;
    cout<<"Enter the value of m: ";
    cin>>n;
    int a=1;
    for(i=1;i<=n;i++){
        for(j=1;j<=n-i;j++){
            cout<<"  ";
        }
        for(j=1;j<=i;j++){
            cout<<(char)(j+64)<<" ";
        }
         cout<<endl;
    }
   
}
