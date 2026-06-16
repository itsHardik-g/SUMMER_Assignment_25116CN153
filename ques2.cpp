#include<iostream>
using namespace std;
/*program to print multiplication table of given number*/
int main (){
int number;
cout<<"Enter the given number"<<endl;
cin>>number;
cout<<"the required multiplication table"<<endl;
int product;
for(int i=1;i<=10;i++){
  product=number*i;

  cout<<number<< "x"<<i<<"="<<product<<endl;
  
}

return 0;
}