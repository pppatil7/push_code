#include <iostream>
#include <vector>
using namespace std;

int main(){

    vector<int> vec; //0
    vector<int> vec1 = {1,2,3}; //3
    cout << vec1[0] <<endl;
    
    vector<int> vec2(5,13);


    cout << vec2[3] << endl;

    return 0;
}