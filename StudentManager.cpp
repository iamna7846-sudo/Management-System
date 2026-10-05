#include <iostream>
#include "StudentManager.h"

using namespace std;

StudentManager::StudentManager()
{
    students[0] = Student(1, "Amna", "1234", "SE");
    students[1] = Student(2, "Maliha", "5678", "CS");
    students[2] = Student(3, "Eman", "9999", "SE");

    studentCount = 3;
}

bool StudentManager::login(string name, string password)
{
    for (int i = 0; i < studentCount; i++)
    {
        if (students[i].name == name &&
            students[i].password == password)
        {
            return true;
        }
    }

    return false;
}

void StudentManager::showStudentInfo(string name)
{
    for (int i = 0; i < studentCount; i++)
    {
        if (students[i].name == name)
        {
            cout << "Student ID: " << students[i].studentID << endl;
            cout << "Name: " << students[i].name << endl;
            cout << "Department: " << students[i].department << endl;

            return;
        }
    }

    cout << "Student not found!" << endl;
}

Student StudentManager::getStudent(string name)
{
    for (int i = 0; i < studentCount; i++)
    {
        if (students[i].name == name)
        {
            return students[i];
        }
    }

    return Student();
}

void StudentManager::showMenu(string name)
{
    int choice;

    do
    {
        cout << "\n===== Student LMS Menu =====" << endl;
        cout << "1. View Profile" << endl;
        cout << "2. View Courses" << endl;
        cout << "3. View Attendance" << endl;
        cout << "4. View Assignments" << endl;
        cout << "5. View Marks" << endl;
        cout << "6. Logout" << endl;

        cout << "\nEnter your choice: ";
        cin >> choice;

        switch (choice)
        {
        case 1:
            showStudentInfo(name);
            break;

        case 2:
            cout << "\nCourses: DSA, OOP, COA, SE" << endl;
            break;

        case 3:
            cout << "\nAttendance: 85%" << endl;
            break;

        case 4:
            showAssignments();
            break;

        case 5:
            showMarks();
            break;

        case 6:
            cout << "\nLogged out successfully!" << endl;
            break;

        default:
            cout << "\nInvalid choice!" << endl;
        }

    } while (choice != 6);
}

void StudentManager::showAssignments()
{
    cout << "\n===== Assignments =====" << endl;

    cout << "\n1. DSA Assignment" << endl;
    cout << "Due Date: 10 October" << endl;
    cout << "Status: Pending" << endl;

    cout << "\n2. OOP Assignment" << endl;
    cout << "Due Date: 12 October" << endl;
    cout << "Status: Submitted" << endl;

    cout << "\n3. COA Assignment" << endl;
    cout << "Due Date: 15 October" << endl;
    cout << "Status: Pending" << endl;

    cout << "\n4. SE Assignment" << endl;
    cout << "Due Date: 18 October" << endl;
    cout << "Status: Submitted" << endl;
}

void StudentManager::showMarks()
{
    cout << "\n===== Student Marks =====" << endl;

    cout << "\nDSA: 82/100" << endl;
    cout << "OOP: 88/100" << endl;
    cout << "COA: 76/100" << endl;
    cout << "SE: 91/100" << endl;

    cout << "\nTotal Subjects: 4" << endl;
}

void StudentManager::addStudent()
{
    int id;
    string name;
    string password;
    string department;

    cout << "\n===== Add New Student =====" << endl;

    if (studentCount >= 10)
    {
        cout << "Student limit reached!" << endl;
        return;
    }

    cout << "Enter Student ID: ";
    cin >> id;

    cout << "Enter Student Name: ";
    cin >> name;

    cout << "Enter Password: ";
    cin >> password;

    cout << "Enter Department: ";
    cin >> department;

    students[studentCount] = Student(id, name, password, department);

    studentCount++;

    cout << "\nStudent added successfully!" << endl;
}

void StudentManager::showAllStudents()
{
    cout << "\n===== Student List =====" << endl;

    for (int i = 0; i < studentCount; i++)
    {
        cout << "\nStudent " << i + 1 << endl;
        cout << "ID: " << students[i].studentID << endl;
        cout << "Name: " << students[i].name << endl;
        cout << "Department: " << students[i].department << endl;
    }
}
