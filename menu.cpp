#include <iostream>
#include "Menu.h"

using namespace std;

void Menu::start()
{
    int choice;

    do
    {
        cout << "\n===== Student LMS =====" << endl;
        cout << "1. Student Login" << endl;
        cout << "2. Admin Login" << endl;
        cout << "3. Exit" << endl;

        cout << "\nEnter your choice: ";
        cin >> choice;

        switch (choice)
        {
        case 1:
            studentLogin();
            break;

        case 2:
            adminLogin();
            break;

        case 3:
            cout << "\nThank you for using Student LMS!" << endl;
            break;

        default:
            cout << "\nInvalid choice!" << endl;
        }

    } while (choice != 3);
}

void Menu::studentLogin()
{
    string name;
    string password;

    cout << "\n===== Student Login =====" << endl;

    cout << "Enter Name: ";
    cin >> name;

    cout << "Enter Password: ";
    cin >> password;

    if (manager.login(name, password))
    {
        cout << "\nLogin Successful!" << endl;
        manager.showMenu(name);
    }
    else
    {
        cout << "\nInvalid Name or Password!" << endl;
    }
}

void Menu::adminLogin()
{
    string username;
    string password;

    cout << "\n===== Admin Login =====" << endl;

    cout << "Enter Username: ";
    cin >> username;

    cout << "Enter Password: ";
    cin >> password;

    if (username == "admin" && password == "admin123")
    {
        cout << "\nAdmin Login Successful!" << endl;

        adminMenu();
    }
    else
    {
        cout << "\nInvalid Admin Username or Password!" << endl;
    }
}

void Menu::adminMenu()
{
    int choice;

    do
    {
        cout << "\n===== Admin Menu =====" << endl;
        cout << "1. View Students" << endl;
        cout << "2. Add Student" << endl;
        cout << "3. View Courses" << endl;
        cout << "4. View Reports" << endl;
        cout << "5. Logout" << endl;

        cout << "\nEnter your choice: ";
        cin >> choice;

        switch (choice)
        {
        case 1:
            manager.showAllStudents();
            break;

        case 2:
            manager.addStudent();
            break;

        case 3:
            viewCourses();
            break;

        case 4:
            viewReports();
            break;

        case 5:
            cout << "\nAdmin Logged out successfully!" << endl;
            break;

        default:
            cout << "\nInvalid choice!" << endl;
        }

    } while (choice != 5);
}

void Menu::viewCourses()
{
    cout << "\n===== Available Courses =====" << endl;

    cout << "\n1. DSA" << endl;
    cout << "   Data Structures and Algorithms" << endl;

    cout << "\n2. OOP" << endl;
    cout << "   Object Oriented Programming" << endl;

    cout << "\n3. COA" << endl;
    cout << "   Computer Organization and Architecture" << endl;

    cout << "\n4. SE" << endl;
    cout << "   Software Engineering" << endl;
}

void Menu::viewReports()
{
    cout << "\n===== LMS Report =====" << endl;

    cout << "\nTotal Students: 4" << endl;
    cout << "Total Courses: 4" << endl;

    cout << "\nStudents:" << endl;
    cout << "1. Amna" << endl;
    cout << "2. Maliha" << endl;
    cout << "3. Eman" << endl;
    cout << "4. Sara" << endl;
}
