#include <iostream>
using namespace std;
/*
program to calculate sum of first n natural numbers*/
int main(){
    int numbers;
    cout <<"enter no.of natural numbers sum you want  to print"<<endl;
    cin>>numbers;
    int sum=0;
    for(int i=1;i<=numbers;i++){
        sum=sum+i;    }
     cout<<"the sum is"<<endl<<  sum  ;
     return 0;   
}