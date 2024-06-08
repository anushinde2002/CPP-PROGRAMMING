using namespace std;
#include<iostream>
int add(int x,int y)
{
    return x+y;
}
double add(double x,double y)
{
    return x+y;
}
int main()
{
    cout<<add(10,40)<<"\n";
    cout<<add(10.02,20.23);
    return 0;

}