#include <iostream>
using namespace std;

int linearSearch(int arr[], int size, int target){
      for(int i = 0; i < size; i++){
         if(arr[i]==target){
            return i;
         }
      }
      return -1;
}

int main(){
    int arr[] = {1,2,3,4,56,78,12,34,11,90,567};
    int size = 11;
    int target = 12;

    int result = linearSearch(arr,size,target);
    cout<<"index of target :"<<result;

    return 0;
}