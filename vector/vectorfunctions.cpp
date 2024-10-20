#include <iostream>
#include <vector>
using namespace std;

int main(){
    
    // vector<char> vec = {'a','b','c','d','e','f'};
    vector<char> vec1;

    cout << "size= " << vec1.size() << endl;

    vec1.push_back(1); //element push at the end
    vec1.push_back(2);
    vec1.push_back(4);
    vec1.push_back(6);
    cout << "size= " << vec1.size() << endl;
    for(int value :vec1){
        cout << value <<" ";
    }
    cout<<endl;
    
    vec1.pop_back(); //element pop at the end
    
    cout << "size= " << vec1.size() << endl;


    for(int value :vec1){
        cout << value <<" ";
    }

    return 0;
}