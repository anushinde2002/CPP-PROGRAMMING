using namespace std;
#include<iostream>
#include<cstring>
int sum(int k)
{
    if(k>0)
    {
        return k+sum(k-1);

    }
    else{
        return 0;
    }
}
int main()
{
    int result=sum(100);
    cout<<result;
    return 0;
}