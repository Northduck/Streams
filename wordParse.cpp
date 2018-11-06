//
//  wordVowels.cpp
//  Streams
//
//  Created by администратор on 26.10.2018.
//  Copyright © 2018 Denisov Daniil. All rights reserved.
//

#include "wordParse.hpp"
#include "Vowels.hpp"
#include <string>
#include <iostream>
bool parseWord(string word){
    if(word.length()>0){
        if(word.length()>1){
            return (isWordVowels(word[0]) && isWordVowels(word[word.length()-1]));
        }
        else{
            return isWordVowels(word[0]);
        }
    }
    else{
        cout<<"Word is empty";
    }
    return true;
}

