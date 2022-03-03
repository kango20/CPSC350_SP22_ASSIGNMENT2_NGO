#ifndef FILEPROCESSOR_H
#define FILEPROCESSOR_H
#include <iostream>
#include <fstream>
using namespace std;

class FileProcessor{
  public:
    FileProcessor(); // default constructor
    ~FileProcessor(); // default destructor
    void processFile(string inputFile, string outputFile, string tS); //function that takes in a string representing the input file with English text and output file with the Tutnese translation
  private:

};

#endif
