//
//  grades_vector.h
//  cprimer exercise
//
//  Created by Jonathan Revah on 06/13/2013.
//  Copyright (c) 2013 Jonathan Revah. All rights reserved.
//

#ifndef cprimer_exercise_grades_vector_h
#define cprimer_exercise_grades_vector_h

#include <vector>
using namespace std;
#endif

void grades_vector() {
    
    vector<int> x(11, 0);
    int grade;
    while (cin >> grade && grade <= 100) {
        cout << "running grades_vector" << endl;
        auto iter = x.begin();
        iter += (grade/10);
        *iter += 1;
        cout << &*iter << endl; /*when you created iter, it points to the vector object as a whole,
                                 therefore to fetch individual memory addresses for elements, you have to
                                 ask for the address to the pointer. so &*iter yields changing memory slots which are
                                 being manipulated by iteration.*/
    
    }
    for ( auto a : x ) {
        cout << a << endl;
    }
    
}