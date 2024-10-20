#include <iostream>
#include <vector>
using namespace std;

int main(){
    
    // vector<char> vec = {'a','b','c','d','e','f'};
    vector<int> vec1;

    cout << "size= " << vec1.size() << endl;

    vec1.push_back(45); //element push at the end
    vec1.push_back(2);
    vec1.push_back(4);
    vec1.push_back(6);
    cout << "size= " << vec1.size() << endl;
    cout<< vec1.back() <<endl; //print element of back 
    cout<<vec1.at(2) <<endl; //get access of particular  index
    for(int value :vec1){
        cout << value <<" ";
    }
    cout<<endl;
    
    vec1.pop_back(); //element pop at the end
    
    cout << "size= " << vec1.size() << endl;


    for(int value :vec1){
        cout << value <<" ";
    }
    cout<<endl;

    cout<< vec1.front() <<endl; //print value at the front


    return 0;
}