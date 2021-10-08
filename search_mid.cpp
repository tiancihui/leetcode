// Compiled with: g++ -Wall -std=c++14 -pthread

//task 
// function
// input

// array1  int   inc  1,3,5,7,9
// array2  int   inc  1,6,6,8,10


// array3    1,1,3,5,6,6,7,8,9,10

// output
// median 5.5



#include <iostream>
#include <vector>

using namespace std;


int main(){
    
    std::vector<int> array_one;
    std::vector<int> array_two;
    array_one.push_back(1);
    array_one.push_back(3);
    array_one.push_back(5);
    array_one.push_back(7);
    array_one.push_back(9);
    
    array_two.push_back(1);
    array_two.push_back(6);
    array_two.push_back(6);
    array_two.push_back(8);
    array_two.push_back(10);
    
    std::vector<int> array_merge;
    int len_one = array_one.size();
    int len_two = array_two.size();
    int index_one = 0;
    int index_two = 0;
    while(index_one < len_one || index_two < len_two){
        if (array_one[index_one] < array_two[index_two]){
            array_merge.push_back(array_one[index_one]);
            ++index_one;
        }else{
            array_merge.push_back(array_two[index_two]);
            ++index_two;
        } 
    }
    
     
    if(index_one < len_one){
         for(; index_one < len_one; ++index_one){
             array_merge.push_back(array_one[index_one]);
         }
    }else{
         for(; index_two < len_two; ++index_two){
             array_merge.push_back(array_two[index_two]);
         }
    }
    
    
    if ((len_one + len_two)%2 == 1){
       cout << "mid is :"<< array_merge[(len_one + len_two)/2 + 1] << endl;
    }else{
       cout << "mid is :"<< (array_merge[(len_one + len_two)/2] + array_merge[(len_one + len_two)/2 - 1])/2 << endl;
    }
    
    
    cout << "Hello, World!" << endl;
    return 0;
}

