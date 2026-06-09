#include"student.h"
void Student::getInfo(fstream& myStudent) {

         getline(myStudent,name);
         getline(myStudent,numberPhone);
         
         string buffer;
         getline(myStudent,buffer);
         grade=stof(buffer);
    }

    void Student::display() {
        cout << "Student's information:" << endl;
        cout << "Name: " << name << endl;
        cout << "Grade: " <<grade << endl;
        cout << "Number Phone: " <<numberPhone << endl;
    }

    string Student::getName() const {return name;}
    string Student::getNumberPhone() const {return numberPhone;}
    float Student::getGrade() const {return grade;}