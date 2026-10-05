#pragma once

#include "StudentData.h"

using namespace std;

class StudentManager
{
private:
    Student students[10];
    int studentCount;

public:
    StudentManager();

    bool login(string name, string password);

    void showStudentInfo(string name);

    Student getStudent(string name);

    void showMenu(string name);

    void showAssignments();

    void showMarks();

    void addStudent();

    void showAllStudents();
};