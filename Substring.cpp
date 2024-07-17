#include<iostream>
#include<string>-
using namespace std;

int main()
{
    string str;
    cout<<"Enter the String:"<<endl;
    cin>>str;
    string substr;
    cout<<"Enter substring:"<<endl;
    cin>>substr;

    size_t found = str.find(substr);

    if(found != string::npos){
        cout<<"Substring found at index:"<<found<<endl;
    }else{
    cout<<"Substring not found"<<endl;
    }
    return 0;

}
