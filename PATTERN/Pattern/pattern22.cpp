/* */

#include<iostream>
using namespace std;

int main() {
    int i, j;

    for(i=1;i<=5;i++){
        if(i==1){
            cout<<1;
        }
        else if(i==2){
            for(j=1;j<=i;j++){
                cout<<(char)(i+64);
            }
        
        }
        else if(i==3){
            for(j=1;j<=i;j++){
                cout<<i;
            }
        }
        else if(i==4){
            for(j=1;j<=i;j++){
                cout<<(char)(i+64);
            }
        }
         else if(i==5){
            for(j=1;j<=i;j++){
                cout<<i;
            }
        }
        cout<<endl;
    }

    return 0;
}

