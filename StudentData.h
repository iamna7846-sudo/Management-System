#pragma once

#include <string>

using namespace std;

class Student
{
public:
    int studentID;
    string name;
    string password;
    string department;

    Student()
    {
        studentID = 0;
        name = "";
        password = "";
        department = "";
    }

    Student(int id, string n, string p, string d)
    {
        studentID = id;
        name = n;
        password = p;
        department = d;
    }
};


class Admin
{
public:
    string username;
    string password;

    Admin()
    {
        username = "admin";
        password = "admin123";
    }
};


class StudentData
{
private:
    Student students[10];
    int studentCount;

public:

    StudentData()
    {
        students[0] = Student(1, "Amna", "1234", "SE");
        students[1] = Student(2, "Maliha", "5678", "CS");
        students[2] = Student(3, "Eman", "9999", "SE");

        studentCount = 3;
    }

    Student getStudent(string name)
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
};