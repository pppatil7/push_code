#include <iostream>
using namespace std;

int sumOfNumbers(int num1, int num2){
    int sum = num1 + num2;
    return sum;
}

int sumN(int n){
int sum = 0;
for(int i=1;i<=n;i++){
sum+=i;
}
return sum;
}


int main(){
    int sum = sumOfNumbers(1,2);
    cout<<"sum of numbers: \n"<<sum<<endl;;
    int sumn = sumN(3);
    cout<<"sum of n numbers: \n"<<sumn;


    return 0;
}