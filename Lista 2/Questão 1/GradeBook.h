#include <iostream>
#include <string>
using namespace std;

class GradeBook{
    private:
        string courseName;
        string professor;
    public:
        GradeBook(string, string);
        void setCourseName(string);
        void setProfessor(string);
        string getCourseName();
        string getProfessor();
        void displayMessage();
};