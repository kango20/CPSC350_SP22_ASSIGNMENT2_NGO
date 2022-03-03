#include "FileProcessor.h"

int main(int argc, char **argv){
  FileProcessor file; // creates an instance of FileProcessor class

  try{
    if (argc != 4){ //checks if user enters correct number of arguments
      cout << "Not enough command line arguments." << endl;
      return 1;
    }
    file.processFile(argv[1], argv[2], argv[3]); // translates the provided input file to Tutnese using the file processor
  }
  catch(runtime_error& excpt){ //catches runtime error
    cout << excpt.what() << endl;
  }
  return 0; // exit
}
