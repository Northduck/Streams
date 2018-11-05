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
void fileParse(string fileName){
    ifstream file;
    string word;
    file.open ((fileName+".txt"), ios::in);
    if(!file){
        cout<<"There is no file with this name\n";
    }
    else{
        while(!file.eof()){
            file >> word;
            deleteMarks(word);
            if(parseWord(word)){
                cout<<word<<endl;
            }
        }
    }

}
