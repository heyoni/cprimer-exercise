//
//  vec_cin.h
//  cprimer exercise
//
//  Created by Jonathan Revah on 06/14/2013.
//  Copyright (c) 2013 Jonathan Revah. All rights reserved.
//

#ifndef cprimer_exercise_vec_cin_h
#define cprimer_exercise_vec_cin_h



#endif

void read_ivec() {
    vector<int> ivec;
    int $a;
    while(cin >> $a) {
        ivec.push_back($a);
        cout << ivec.size() << endl;
    }
}

void read_svec() {
    vector<string> svec;
    string $a;
    while(cin >> $a) {
        svec.push_back($a);
        cout << svec.size() << endl;
    }
}