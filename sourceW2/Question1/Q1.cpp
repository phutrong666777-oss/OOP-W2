#include "Q1.h"

    void Student::getInfo() {
        
        cout<<"Enter student's information:"<<"\n";
        getName();
        getNumberPhone();
        getGrade();
    }

    void Student::display() {
        cout << "Student's information:" << endl;
        cout << "Name: " << name << endl;
        cout << "Grade: " <<grade << endl;
        cout << "Number Phone: " <<numberPhone << endl;
    }

    void Student::getName() {
        do{

            cout << "Enter student's name: "; 
            getline(cin, name);

            if(!isValidName()){
                cout<<"Name is invalid!"<<"\n";
                cout<<"Please re-enter student's name:"<<"\n";
            }

        }while(!isValidName());

    }

    void Student::getGrade() {

        do{
            cout << "Enter student's grade: ";
            cin >> gradeBuffer;
            cin.ignore();

            if(!isValidGrade()){
                cout<<"Grade is invalid!"<<"\n";
                cout<<"Please re-enter student's grade:"<<"\n";
            }
        }while(!isValidGrade());
    }

    void Student::getNumberPhone() {

        do{
            cout << "Enter student's number phone: ";
            cin >> numberPhone;
            cin.ignore();

            if(!isValidNumberPhone()){
                cout<<"numberphone is invalid!"<<"\n";
                cout<<"Please re-enter student's numberphone:"<<"\n";
            }
        }while(!isValidNumberPhone());
        
    }

    bool Student::isAlpha(string s){
        bool hasChar=false;
        for(size_t i=0;i<s.size();i++){

            if((s[i]>='a'&&s[i]<='z')
            ||(s[i]>='A'&&s[i]<='Z'))

            {
                hasChar=true;
            }else if(s[i]!=' '){
                return false;
            }
        }

        return hasChar;
    }

    bool Student::isValidName(){
        if(name.empty() 
            || name.size() > 20 
            || !isAlpha(name))

            {
                return false;
            }
        
        return true;
    }

    bool Student::isInterger(string s){
        try{
            size_t pos;
            stoll(s,&pos);
            return pos==s.length();
        }
        catch(...){
            return false;
        }
    }

    bool Student::isValidNumberPhone(){
        if(numberPhone.empty()
            || numberPhone.size() < 9 
            || numberPhone.size() > 11
            || !isInterger(numberPhone))

            {
                return false;
            }

        return true;

    }

    bool Student::isFloat(string s){
        try{
            size_t pos;
            stof(s,&pos);
            return pos==s.length();
        }
        catch(...){
            return false;
        }
    }

    bool Student::isValidGrade(){
        if(!isFloat(gradeBuffer) || gradeBuffer.size()>1)

            {
                return false;
            }

        grade=stof(gradeBuffer);
        if(grade<0 || grade>10)

            {
                return false;
            }
        
            return true;
    }
