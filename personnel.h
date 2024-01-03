#pragma once

#include <iostream>
#include <string>

using namespace std;
class Personnel{
    private:
        string name;
        string status;
        string grade;
        string email;
        int age;

    public:
        void setAll();
        void setStatus();
        void setGrade();
        void setEmail();
        void setAge();
        void printAll();
        void exportData();



};