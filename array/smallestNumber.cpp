#include <iostream>
using namespace std;

int main(){


   int numbers[] = {24, 12, 23, 22, 89, 11, 10, 8, 70, 30};
   int size = 10;
   int smallest = INT_MAX;

   for(int i = 0; i < size; i++){
       if(numbers[i] < smallest){
        smallest = numbers[i];
       }
   }



   cout << "smallest number of array is : " << smallest ;

    return 0;
}