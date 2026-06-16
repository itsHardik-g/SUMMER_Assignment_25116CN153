#include<iostream>
using namespace std;
/*
to print factorial of given number*/
int main(){
int number;
cout<<"Enter the number whose factorial to calculate"<<endl;
cin>>number;
cout<<"the factorial of "<<number<< " is"<<endl;
int factorial=1;
for(int i=1;i<=number;i++){
    factorial=factorial*i;
    
}
cout<<factorial<<endl;
return 0;
}