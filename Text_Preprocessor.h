//
// Created by 77775 on 09.11.2021.
//

#ifndef UNTITLED12_TEXT_PREPROCESSOR_H
#define UNTITLED12_TEXT_PREPROCESSOR_H

#include <iostream>
#include <fstream>
#include <string>
#include <algorithm>
using namespace std;

class Text_Preprocessor {
private:
    string line;
    ifstream file;
    ofstream outfile;
public:
    Text_Preprocessor();
    virtual ~Text_Preprocessor();
    void process_text();
    void search_word(const string& str);
    void remove_words();
};


#endif //UNTITLED12_TEXT_PREPROCESSOR_H
