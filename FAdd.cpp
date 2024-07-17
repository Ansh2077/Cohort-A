#include<iostream>
using namespace std;
void add(int a,int b){
int sum = a+b;
cout<<"Sum of 2 numbers is: "<<sum<<endl;
}

void add(int a, int b, int c){
int sum1 = a+b+c;
cout<<"Sum of 3 numbers is: "<<sum1<<endl;
}

int main(){
int a,b,c,option;
cout<<"Enter value of 3 numbers: "<<endl;
cin>>a>>b>>c;
cout<<"Do you want addition of two or three number"<<endl;
cout<<"1. Two Number"<<endl;
cout<<"2. Three Number"<<endl;
cin>>option;
if(option == 1){
    add(a,b);
}
else{
    add(a,b,c);
}
return 0;
}
