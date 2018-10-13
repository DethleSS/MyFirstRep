//
//  functions.h
//  BGUIR_LABS
//
//  Created by mb on 14/10/2018.
//  Copyright © 2018 mb. All rights reserved.
//

#ifndef functions_h
#define functions_h
int sum (int a, int b){
    return a+b;
}
int mul (int a, int b){
    return a*b;
}
int sum_positive(int temp, int array_element){
    if(array_element>0){
        return temp+array_element;
    }
    return temp;
}
int mul_negative (int temp, int array_element){
    if(array_element<0){
        return temp*array_element;
    }
    return temp;
}
int mul_even (int temp, int array_element){
    if(array_element %2 == 0){
        return temp*array_element;
    }
    return temp;
}

int sum_negative(int temp, int array_element){
    if(array_element<0){
        return temp+array_element;
    }
    return temp;
}



#endif /* functions_h */
