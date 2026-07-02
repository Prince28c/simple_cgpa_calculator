// A SIMPLE CGPA CALCULATOR
#include <iostream>
#include <string>
using namespace std;
void personal_infor(string name, int ID) {
    cout<<"ENTER YOUR FULL NAME: ";
    getline(cin,name);
    cout<<"ENTER YOUR ID: "<<ID<<endl;
}
// GCTU grading scale
double gctuGradePoint(int mark) {
    if (mark >= 80) return 4.00;      // A
    else if (mark >= 75) return 3.75; // A-
    else if (mark >= 70) return 3.50; // B+
    else if (mark >= 65) return 3.25; // B
    else if (mark >= 60) return 3.00; // B-
    else if (mark >= 55) return 2.75; // C+
    else if (mark >= 50) return 2.50; // C
    else if (mark >= 45) return 2.00; // C-
    else if (mark >= 40) return 1.50; // D
    else return 0.00;                 // F
}

//Legon grading scale
double legonGradePoint(int mark) {
    if (mark >= 80) return 4.00;      // A
    else if (mark >= 75) return 3.50; // B+
    else if (mark >= 70) return 3.00; // B
    else if (mark >= 65) return 2.50; // C+
    else if (mark >= 60) return 2.00; // C
    else if (mark >= 55) return 1.50; // D+
    else if (mark >= 50) return 1.00; // D
    else if (mark >= 45) return 0.50; // E
    else return 0.00;                 // F
}
int main() {










    return 0;
}