#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    ofstream outputFile;
    outputFile.open("Text.txt");
    outputFile << "hello";
    outputFile.close();
   
   return 0;
}

