#include <iostream>
using namespace std;

int main(){

    int largest = INT_MIN;
    int numbers[] = {24, 12, 23, 22, 89, 11, 10, 8, 70, 30};
    int size = 10;

    for(int i = 0; i < size; i++){
      if(numbers[i] > largest){
       largest = numbers[i];
      }
    }

    cout << "largest number of array is :" << largest;

    return 0;
}