#include<iostream>
using namespace std;
void add(int a,int b)
{
    int sum = a+b;
    cout<<"Sum of two numbers is: "<<sum;
}

int main()
{
    int a,b;
    cout<<"Enter the numbers: "<<endl;
    cin>>a>>b;
    add(a,b);
    return 0;
}
