#include<iostream>
using namespace std;
int main()
{
    int bike_count = 2;
    int truck_count = 7;
    int vechile_count = bike_count + truck_count;
    int narrowing_conversion_assignment = 2.9;

    cout<<"Bike_count:"<<bike_count<<endl;
    cout<<"Truck count:"<<truck_count<<endl;
    cout<<"Vechile_count:"<<vechile_count<<endl;
    cout<<"Narrowing conversion:"<<narrowing_conversion_assignment<<endl;

    cout<<"Sizeof int:"<<sizeof(int)<<endl;
    cout<<"Sizeof truck_count:"<<sizeof(truck_count)<<endl;
    return 0;
}
