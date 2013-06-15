//write binary search program w/ iterators
//write grade clustering program w/ iterators

#include <iostream>
#include "grades_arrays.h"
#include "grades_vector.h"
#include "array_size.h"
#include "vec_cin.h"

using namespace std;

int main(int argc, const char   * argv[])
{
    //224
    //grades();
    
    grades_vector();
    
//    read_svec();
    string astring;
    vector<string> svec;
    
    while(cin >> astring) {
        svec.push_back(astring);
    }
    
    int x = 0;
    for (auto &i: svec) {
        for (auto &j: i) {
            toupper(j);
            cout << j;
        }
        cout << " ";
        if((x + 1) % 8 == 0) {
            cout << endl;
        }
        ++x;
    }
    
    //get_values();
    
    //42 65 95 100 39 67 95 76 88 76 83 92 76 93
}

