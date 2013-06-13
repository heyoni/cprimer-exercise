//
//  grades_arrays.c
//  cprimer exercise
//
//  Created by Jonathan Revah on 06/13/2013.
//  Copyright (c) 2013 Jonathan Revah. All rights reserved.
//

void grades() {
    int scale[11] = {0};
    unsigned grade;
    
    while (std::cin >> grade && grade <= 100) {
        ++scale[grade/10];
        
    }
    
    for (int a : scale) {
        std::cout << a << " ";
    }
}