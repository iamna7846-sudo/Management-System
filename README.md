

1. Project Overview

Student LMS is a console-based Learning Management System developed in C++.

The system provides basic LMS features for students and administrators. Students can log in, view their profile, courses, attendance, assignments, and marks. Administrators can log in, view students, add new students, view courses, and generate reports.

The project uses a layered software architecture to separate different responsibilities of the system.


2. Architecture Used

The project uses a Layered Architecture.

The system is divided into three main layers:

 Presentation Layer

This layer handles user interaction, menus, input, and output.

Files:
- Menu.h
- Menu.cpp
- main.cpp

 Business Logic Layer

This layer handles the main logic and operations of the LMS.

Files:
- StudentManager.h
- StudentManager.cpp

Responsibilities:
- Student login
- Student menu
- Student information
- Assignments
- Marks
- Adding students
- Viewing students

Data Layer

This layer contains student data and data-related classes.

File:
- StudentData.h

Responsibilities:
- Student information
- Student records
- Student data structure
- Admin data



 3. System Flow

User
↓
Presentation Layer
↓
Business Logic Layer
↓
Data Layer
↓
Student Records

The user interacts with the Presentation Layer. The Presentation Layer calls the Business Logic Layer, which performs the required operation using the available data.



4. Main Features

 Student Features

- Student Login
- View Student Profile
- View Courses
- View Attendance
- View Assignments
- View Marks
- Logout


- Admin Login
- View All Students
- Add New Student
- View Available Courses
- View LMS Reports
- Logout

- Programming Language: C++
- IDE: Microsoft Visual Studio
- Application Type: Console-Based Application
- Architecture: Layered Architecture
- Version Control/Documentation: README.md


StudentLMS

├── Presentation
│   ├── main.cpp
│   ├── Menu.cpp
│   └── Menu.h
│
├── Business
│   ├── StudentManager.cpp
│   └── StudentManager.h
│
├── Data
│   └── StudentData.h
│
└── README.md


 7. Login Credentials

Student Accounts

Student 1:
- Name: Amna
- Password: 1234

Student 2:
- Name: Maliha
- Password: 5678

Student 3:
- Name: Eman
- Password: 9999

Admin Account

- Username: admin
- Password: admin123


 8. How to Run the Project

1. Open the Student LMS project in Microsoft Visual Studio.
2. Build the solution.
3. Run the project.
4. Select Student Login or Admin Login.
5. Enter the required credentials.
6. Select options from the menu.
7. Use Logout to return to the previous menu.
8. Select Exit to close the application.


9. Objective

The main objective of this project is to develop a simple Learning Management System while demonstrating the use of software architecture and separation of responsibilities.

The project also demonstrates how different layers work together to provide functionality to the user.



 10. Future Improvements

The system can be improved by adding:

- File handling for permanent data storage
- Course registration
- Assignment submission
- Dynamic attendance records
- Dynamic marks management
- Password security
- Database integration
- Graphical User Interface
- Online LMS functionality


11. Conclusion

Student LMS is a simple console-based application that demonstrates the basic functionality of a Learning Management System.

The layered architecture makes the project easier to understand, maintain, and extend because different responsibilities are organized into separate layers.