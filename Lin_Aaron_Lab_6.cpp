// Aaron Lin
// Worked with: Benson Chen, Zion Ogunsola
// 10/15/2024
// Lab 6

#include <iostream> 
#include <fstream>
#include <string>

using namespace std;
 
//beginning of code
int main ( ) 
{    
    ifstream inFile; //input file
    ofstream outFile; //output file
    int num1, num2; //integers
    char c; //chracters
    string word; //words
    
    inFile.open("inData.txt"); //opens the input file
    outFile.open("outData.txt"); //opens the output file

    cout << "\nProgram to review streams....." << endl; //prints: Program to review streams.....

    inFile >> num1 >> num2; //input file process the integer
    outFile << num1 + num2 << endl; //output file prints the sum of the 2 integers

    inFile >> c; //input file process the character
    c = c + 1;
    outFile << c << endl; //output file prints character after adding 1

    inFile >> word; //input file process the string
    outFile << word << endl; //output file prints the word

    inFile.close(); //close the input file
    outFile.close(); //close the output file
 
     return 0; //ends code
}

/*

Program to review streams.....
*/

