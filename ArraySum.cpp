//Given an array of N element,and a number value, the task is to find the number of pairs of integer in array whose sum is equal to given value
//pairs(a,b)

#include<iostream>
using namespace std;
int main(){
int a[5] = {1,4,2,3,8};
int value = 5;
int count = 0;
for(int i=0;i<5;i++){
    for(int j=i+1;j<5;j++){
        if(a[i]+a[j]==value){
            count=count+1;
        }
    }
}
cout<<"The count of pairs "<<value<<" is "<<count<<endl;
return 0;
}
