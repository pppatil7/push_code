#include <iostream>
using namespace std;

int main(){

   int numbers[5] = {1, 3, 5, 7, 9};

   double weight[] = {74.56, 23.43, 34.21, 45.32, 43.21, 65.54, 76.31, 54.21}; //8 size
   
   int size = 8;

//    cout << weight[0] << endl;
//    cout << weight[1] << endl;
//    cout << weight[2] << endl;
//    cout << weight[3] << endl;
//    cout << weight[4] << endl;
//    cout << weight[5] << endl;
//    cout << weight[6] << endl;
//    cout << weight[7] << endl;


for (int i = 0; i < size; i++)
{
    cout << weight[i] << " ";
}

    return 0;
}