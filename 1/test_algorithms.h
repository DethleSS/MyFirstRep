//
//  test_algorithms.h
//  BGUIR_LABS
//
//  Created by mb on 13/10/2018.
//  Copyright © 2018 mb. All rights reserved.
//

#ifndef test_algorithms_h
#define test_algorithms_h
#include "algorithms.h"
#include "functions.h"
#include <cassert>
void test_accumulate(){
    int array[10] {2,4,6,8,25,67,23,80,7,10};
    assert(accumulate(array,0,10)==232);
    assert(accumulate(array,0,10,100,sum)==332);
}







#endif /* test_algorithms_h */
