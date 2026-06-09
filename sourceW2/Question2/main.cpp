#include"Q2.cpp"

int main(){
    ClassRoom classRoom;
    Student student;
    fstream inputFile;

    int n=0;
    inputFile.open("LopHoc.txt", fstream::in);
    if(inputFile>>n){
        inputFile.ignore();

        for(int i=0;i<n;i++){
            student.getInfo(inputFile);
            classRoom.addStudent(student);
        }
    }else{
        cerr<<"Error: Can't open file";
        return 1;
    }

    string name;
    cout<<"Enter student name to remove:";
    getline(cin,name);
    classRoom.removeStudent(name);

    classRoom.sortStudentGrade();
    classRoom.printStudentList();
    return 0;

}