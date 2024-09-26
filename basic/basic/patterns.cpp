#include <iostream>
using namespace std;

int main(){

     

     //floyds triangle pattern
     int n = 4;
     int count = 1;
     for(int i=0;i<n;i++){
       for(int j=0;j<i+1;j++){
        cout<<count<<" ";
        count++;
       }
       cout<<endl;
     }




//backword triangle pattern

// int n = 5;
// for(int i=0;i<n;i++){
// for(int j=i+1;j>0;j--){
// cout<<j;
// }
// cout<<endl;
// }



// triangle pattern
// int n=4;
//     for(int i=0;i<n;i++){
//         for(int j=0;j<i+1;j++){
//           cout<<i+1;
//         }
//         cout<<endl;
//     }

    return 0;
}