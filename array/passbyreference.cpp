#include <iostream>
using namespace std;

void updateArr(int arr[], int size){
    cout<<"in function\n";
for(int i = 0; i < size; i++){
    arr[i] = 2 * arr[i];
}
}

int main(){
 

 int arr[] = {1,2,3};
 int size = 3;
 updateArr(arr,size);
cout << "in main\n";
 for(int i = 0;i < size; i++){
   cout << arr[i]<< " ";
 }
 cout<<endl;


    return 0;
}