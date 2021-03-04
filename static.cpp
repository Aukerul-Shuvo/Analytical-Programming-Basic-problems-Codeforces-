#include<iostream>

using namespace std;

void display()
{
   static int counter=0;

    counter=counter+1;
    cout<<counter<<endl;

}

int main()
{
    static int counter;
   cout<<counter;


    return 0;

}
