//
//  deleteMarks.cpp
//  Streams
//
//  Created by администратор on 26.10.2018.
//  Copyright © 2018 Denisov Daniil. All rights reserved.
//

#include "deleteMarks.hpp"
#include <stdio.h>
#include <string>
using namespace std;
void deleteMarks(string &word){
    char marks[9]={',', '.', ':', ';', '-', '!', '?', '=', '+'};
    for(int i=0;i<word.length();++i){
        for(int j=0;j<9;++j){
            if(word[i]==marks[j]){
                word.erase(i,1);
                i=0;
                break;
            }
        }
    }
}
