// Factorial of number

#include <iostream>
using namespace std;

int main(){
    int fact  = 1, num;

    cout<<"Enter your number: ";cin>>num;

    while( num>0 ){
        fact *= num; // fact = fact*num;
        num--;
    } 

    cout<<"Fact: "<<fact<<endl;

    return 0;
}