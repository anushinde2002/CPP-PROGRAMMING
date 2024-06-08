using namespace std;
#include<iostream>
#include<cstring>
int plusFunctionInt(int x,int y)
{
    return x+y;
}
double plusFunctionDouble(double x,double y)
{
    return x+y;
}
int main()
{
    int myNum1=plusFunctionInt(8,5);
    double myNum2=plusFunctionDouble(4.22,5.2);
    cout<<"Int:"<<myNum1<<"\n";
    cout<<"Double:"<<myNum2;
    return 0;
    



}