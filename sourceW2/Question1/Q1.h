#include<iostream>
#include<string>
#include<vector>
using namespace std;
class Student {
    string name;
    string numberPhone;
    float grade;
    string gradeBuffer;

public:

    void getInfo();

    void display();

private:

    bool isAlpha(string s);

    bool isValidName();

    bool isInterger(string s);

    bool isValidNumberPhone();

    bool isFloat(string s);

    bool isValidGrade();

    void getName();

    void getGrade();

    void getNumberPhone();

    

};
