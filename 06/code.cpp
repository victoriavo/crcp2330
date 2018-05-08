#include "code.h"

vector<string> instructions;

vector<string> Code::processInstructions(vector<string> fileInstructions)
{
    instructions = fileInstructions;
    for(int i = 0; i < instructions.size(); i++)
    {
        if(instructions[i][0] == '@')//checks for basic A - instructions
        {
            replaceAInstructions(instructions[i], i);
        }
    }
    return instructions;
}

//only works for basic instructions
void Code::replaceAInstructions(string instructionLine, int index)
{
    //remove '@' symbol
    string instrLine = instructionLine;
    instrLine = instrLine.substr(1, (instructionLine.length()-1));
    //convert string address value to int and then to hexadecimal
    int addressVal = stoi(instrLine);
    string hexAddress = convertToHex(addressVal);
    
    instructions[index] = hexAddress;
    
    return;
}

string Code::convertToHex(int value)
{
    //string of 16 characters
    stringstream sstream;
    sstream << std::hex << value;
    string lowerFigs = sstream.str();
    int numDigits = lowerFigs.length();
    int digitsToAdd = 16 - numDigits;
    string result;
    for(int i = 0; i < digitsToAdd; i++)
        result.append("0");
    result.append(lowerFigs);
    return result;
}
