#include<iostream>
using namespace std;
int main(){
int apple_count(5);
int orange_count(10);
int fruit_count {apple_count + orange_count};
//int bad-initialization ( doesnt_exist3 + doesnt exist4)

//Information lost. Less safe than braced initialization
int  narrowing_conversion_functional(2.9);

cout<<"Apple_count:"<<apple_count<<endl;
cout<<"Orange_count:"<<orange_count<<endl;
cout<<"Fruit_count:"<<fruit_count<<endl;
cout<<"Narrowing Conversion:"<<narrowing_conversion_functional<<endl;//Will loose info
return 0;
}
