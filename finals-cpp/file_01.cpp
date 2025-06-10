#include <iostream>
#include <fstream>
using namespace std;

int main() {
    ofstream fileOut("student.txt");
    string name;
    int roll;
    float marks;

    cout << "Enter data of 5 students:\n";
    for (int i = 1; i <= 5; i++) {
        cout << "Student " << i << ":\n";
        cout << "Name: ";
        cin >> name;
        cout << "Roll Number: ";
        cin >> roll;
        cout << "Marks: ";
        cin >> marks;
        fileOut << name << "\t" << roll << "\t" << marks << endl;
    }
    fileOut.close();

    ifstream fileIn("student.txt");
    float total = 0;
    int count = 0;

    cout << "\nStudent Records:\n";
    cout << "Name\tRoll\tMarks\n";

    while (fileIn >> name >> roll >> marks) {
        cout << name << "\t" << roll << "\t" << marks << endl;
        total += marks;
        count++;
    }
    fileIn.close();

    cout << "\nAverage Marks: " << total / count << endl;

    return 0;
}
