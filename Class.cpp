#include <iostream>
//22MH1A05G1

using namespace std;

class Student {
public:
   
    string name,rollNumber,branch;
    
	Student(string name, string branch,string rollNumber) {
        this->name = name;
        this->branch = branch;
        this->rollNumber = rollNumber;
    }

    
    void displayDetails() {
        cout << "Name: " << name <<endl;
        cout << "Branch " << branch <<endl;
        cout << "Roll Number: " << rollNumber <<endl;
    }


};
int main() {

    string name, rollNumber,branch;
    
    
    cout << "Enter student's name: ";
    cin >> name;

    cout << "Enter student's Branch: ";
    cin >> branch;

    cout << "Enter student's roll number: ";
    cin >> rollNumber;
        
    Student student1(name, branch, rollNumber);    
	student1.displayDetails();
    return 0;
}
