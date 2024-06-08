using namespace std;
#include<iostream>
#include<cstring>

    void myFunction(string country="Norway")
    {
        cout<<country<<"\n";
    }
    int main()
    {
        myFunction("Sweden");
        myFunction("London");
        myFunction("India");
        myFunction("America");
        myFunction("Japan");
        return 0;
    }
    

