//
//  main.cpp
//  Streams
//
//  Created by администратор on 26.10.2018.
//  Copyright © 2018 Denisov Daniil. All rights reserved.
//

#include <iostream>
#include <string>
#include "fileParse.hpp"
using namespace std;
int main() {
    int a=1;
    string c;
    while(a==1){
        cout<<"Enter name of the file"<<endl;
        cin>>c;
        cout<<endl;
        cout<<c;
        fileParse(c);
        cout<<"Do you want to continue work with programm?"<<endl;
        cin>>a;
    }
    return 0;
}
