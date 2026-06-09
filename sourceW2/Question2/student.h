#include<iostream>
#include<string>
#include<fstream>
using namespace std;
class Student {
private:
    string name;
    string numberPhone;
    float grade;

public:

    void getInfo(fstream& myStudent);

    void display();

    string getName() const;
    string getNumberPhone() const;
    float getGrade() const;

};
