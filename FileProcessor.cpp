#include "FileProcessor.h"
#include "Translator.h"
#include <exception>

FileProcessor::FileProcessor(){} // default constructor

FileProcessor::~FileProcessor(){} // default destructor

//function that takes in a string representing the input file with English text and output file with the Tutnese translation
void FileProcessor::processFile(string inputFile, string outputFile, string translationStyle){

  Translator t;
  ifstream inFS; // input file stream
  ofstream outFS; // output file stream
  string line;

  //opens the input file and output file
  inFS.open(inputFile);
  outFS.open(outputFile);

  // throws an error if file does not open
  if(!inFS.is_open()){
    throw runtime_error("Could not open file");
  }

  // if user enter E2T, calls function to translate english to tutnese
  if (translationStyle == "E2T"){
    //writes the Tutnese translation of the input file to the output file
    while(getline(inFS, line)){
      outFS << t.translateEnglishSentence(line) << endl; //write it then read again
    }
  }

  // if user enter T2E, calls function to translate tutnese to english 
  if (translationStyle == "T2E"){
    //writes the Tutnese translation of the input file to the output file
    while(getline(inFS, line)){
      outFS << t.translateTuttoEng(line) << endl; //write it then read again
    }
  }
  //Done with file, so close it
  inFS.close();
  outFS.close();
}
