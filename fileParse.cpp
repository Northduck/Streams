//
//  fileParse.cpp
//  Streams
//
//  Created by администратор on 26.10.2018.
//  Copyright © 2018 Denisov Daniil. All rights reserved.
//

#include "fileParse.hpp"
#include "wordParse.hpp"
#include "deleteMarks.hpp"
#include <string>
#include <fstream>
#include <iostream>
using namespace std;
bool fileParse(string fileName){
    ifstream file;
    string word;
    file.open ((fileName+".txt"), ios::in);
    if(!file){
        cout<<endl<<"There is no file with this name"<<endl;
        return false;
    }
    while(!file.eof()){
        file >> word;
        deleteMarks(word);
        if(parseWord(word)){
            cout<<word<<endl;
        }
    }
    cout<<endl;
    cout<<endl;
    file.close();
    return true;
}
