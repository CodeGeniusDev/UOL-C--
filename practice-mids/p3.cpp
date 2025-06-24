#include <iostream>
using namespace std;

int globalVar = 10;

void demonstrateVariables() 
{
    int localVar = 20;

    cout << "Inside the function:" << endl;
    cout << "Global variable: " << globalVar << endl;  
    cout << "Local variable: " << localVar << endl;    
}

int main() 
{
    cout << "Inside the main function before calling demonstrateVariables:" << endl;
    cout << "Global variable: " << globalVar << endl;  

    demonstrateVariables();

    cout << "Inside the main function after calling demonstrateVariables:" << endl;
    cout << "Global variable: " << globalVar << endl;  

    globalVar = 30;
    cout << "Modified Global variable: " << globalVar << endl;

    return 0;
}
