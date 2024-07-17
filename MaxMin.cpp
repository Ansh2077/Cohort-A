#include<iostream>
using namespace std;
int main()
{
    int arr[5] = {10,20,30,40,50};

    int sum = 0;
    for(auto x : arr)
        sum+= x;
    cout<<"Sum is"<<sum;

    int max = -32678;
    for(auto temp : arr)
    {
        if(temp>max){
            max = temp;
        }

    }
    cout<<"Max element is:"<<max;

}
