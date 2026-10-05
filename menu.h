#pragma once

#include <string>
#include "StudentManager.h"

using namespace std;

class Menu
{
private:
    StudentManager manager;

public:
    void start();
    void studentLogin();
    void adminLogin();
    void adminMenu();
    void viewCourses();
    void viewReports();
};
