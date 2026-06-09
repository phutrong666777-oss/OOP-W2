# OOP Week 2 - Basic Classes

## Description

This project is a Week 2 Object-Oriented Programming assignment implemented in C++.

The project demonstrates fundamental OOP concepts through the implementation of two classes:

- Student
- ClassRoom

## Features

### Student (Question 1)

- Get information of student
- Display information
- Get name of student
- Get grade of sudent
- Get number phone of student

### ClassRoom (Question 2)

- Add student from file LopHoc.txt into class
- Remove student(from file LopHoc.txt)
- Sort student grade
- print student list

## Project Structure

```text

sourceW2/
│   ├── Question1/
|   |   ├──main.cpp
│   │   ├── Q1.h
│   │   └── Q1.cpp
│   │
│   ├── Question2/
|       └──output
|          └──LopHoc.txt
|       ├──main.cpp
│       ├── Q2.h
│       └── Q2.cpp
|       ├──student.cpp
|       └──student.h
|        
|
└── README.md
```

## Compile

```bash
g++ main.cpp Q1.cpp Q2.cpp -o program
```

## Run

```bash
./program
```

## Sample Output

### Student

```text
Enter student's information:
Enter student's name: Nguyen Le Phu Trong
Enter student's number phone: 134567896
Enter student's grade: 9

Student's information:
Name: Nguyen Le Phu Trong
Grade: 9
Number Phone: 134567896
```

### ClassRoom

```text
Da them hoc sinh vao lop thanh cong
Da them hoc sinh vao lop thanh cong

Enter student name to remove:Nguyen Hai Dang
Da xoa thanh cong

0.Student's information:
Name: Tran Ngoc Dat Thanh
Grade: 7.5
Number Phone: 123456789
```

## Author

Le Phu Trong Nguyen

Student of Information Technology
