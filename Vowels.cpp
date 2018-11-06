//
//  Vowels.cpp
//  Streams
//
//  Created by администратор on 26.10.2018.
//  Copyright © 2018 Denisov Daniil. All rights reserved.
//

#include "Vowels.hpp"
#include <stdio.h>
#include <string>
using namespace std;
bool isWordVowels(char el){
    char vowels[12]={'a','e','y','o','i','u','A','E','Y','O','I','U'};
    for(int i=0;i<12;++i){
        if(el==vowels[i]){
            return true;
        }
    }
    return false;
}
