#include <iostream>
using namespace std;

int fact(int number){
int factorial = 1;
for(int i=1;i<=number;i++){
factorial=factorial*i;
}
return factorial;
}


int main(){
    int factorial = fact(4);
    cout<<"factorial is :\n"<<factorial;
    return 0;
}