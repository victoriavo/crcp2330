#ifndef CODE
#define CODE

#include <iostream>
#include <fstream>
#include <string>
#include <sstream>
#include <vector>
#include <iomanip>
#include "symbolTable.h"
#include <map>

using namespace std;

class Code
{
    public:
    vector<string> processInstructions(vector<string>);
    void replaceAInstructions(string, int);
    void replaceCInstructions(string, int);
    vector<string> separateInstruction(string, int);
    vector<string> translateInstruction(vector<string>, int);
    string compZEqual0(string);
    string destBin(string);
    string jumpBin(string);
    vector<string> compBin(string);
    bool isNumericAddress(string);
    private:
    vector<string> instructions;
    SymbolTable symbolTable;
};

#endif //   CODE
