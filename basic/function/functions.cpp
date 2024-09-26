#include <iostream>
using namespace std;

//function definition
int printHello(){
cout<<"Hello..this function is to print hello..\n";
return 5;
}

int main(){
    //function call / invoke
    int value = printHello();
    cout<<"value is: "<<value<<endl;
    return 0;
}