#include"student.cpp"
#include <algorithm>
#include<vector>

class ClassRoom{
    vector <Student> studentList;

public:

    void addStudent(Student students);

    void removeStudent(string nameStudent);

    void sortStudentGrade();

    void printStudentList();

private:

    bool isAddedStudent(Student student);

    int getStudentIndex(string name);

};