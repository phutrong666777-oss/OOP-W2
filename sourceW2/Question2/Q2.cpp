#include "Q2.h"

    void ClassRoom::addStudent(Student students){

        if(isAddedStudent(students)){
            cout<<"Da co hoc sinh trong lop"<<"\n";
            return;
        }

        studentList.push_back(students);
        cout<<"Da them hoc sinh vao lop thanh cong"<<"\n";
    }

    void ClassRoom::removeStudent(string nameStudent){
        int pos=getStudentIndex(nameStudent);
        if(pos==-1){
            cout<<"Khong co hoc sinh trong lop"<<"\n";
            return;
        }

        studentList.erase(studentList.begin()+pos);
        cout<<"Da xoa thanh cong"<<"\n";
    }

    void ClassRoom::sortStudentGrade(){
        if(studentList.empty()){
            return;
        }

        sort(studentList.begin(),studentList.end(),
        [](const Student& a, const Student& b)
        {
            return a.getGrade()>b.getGrade();
        });
    }

    void ClassRoom::printStudentList(){
        if(studentList.empty()){
            return;
        }

        for(size_t i=0;i<studentList.size();i++){
            cout<<i<<".";
            studentList[i].display();
        }
    }

    bool ClassRoom::isAddedStudent(Student student){

        for(const auto& students: studentList){
            if(students.getName()==student.getName()){
                return true;
            }
        }

        return false;
    }

    int ClassRoom::getStudentIndex(string name){
        for(size_t i=0;i<studentList.size();i++){
            if(studentList[i].getName()==name){
                return i;
            }
        }

        return -1;
    }




