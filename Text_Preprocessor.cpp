//
// Created by 77775 on 09.11.2021.
//

#include "Text_Preprocessor.h"


Text_Preprocessor::~Text_Preprocessor() {
    file.close();
}

Text_Preprocessor::Text_Preprocessor(){
    file.open("file.txt",ios::in);
}

void Text_Preprocessor::process_text() {

    while (getline(file, line)) {
        line.erase(remove_if(line.begin(), line.end(),
                             [](const char &ch) {
                                 return ch == ',' || ch == '.' || ch == '!' || ch == '?' || ch == ':' || ch == ';' ||
                                        ch == '"';
                             }), line.end());

        for_each(line.begin(), line.end(), [](char &ch) {
            ch = toupper(ch);});
        cout<<line<<endl<<endl;
    }
}

















/*
void Text_Preprocessor::remove_words(){
    string word;
    cout<<endl<<endl<<endl;
    while (getline(file>>word,line)) {
        cout<<word;
        if (line.find(word) != string::npos) {
            cout << word;
            outfile << word << endl;
        }
        cout << line << "\n";
    }
}
    void Text_Preprocessor::search_word(const string &str) {

        int count = 0;
        cout << "the word is: " << str << endl;
        while (getline(file, line)) {
            count++;
            cout << "Sentence #" << count << endl;
            if (line.find(str) != string::npos) {
                cout << "The word is find: " << line << endl << endl;
            } else cout << "\n The word is not found: " << line << endl << endl;
        }
    }*/
