#include<iostream>
#include<string>
#include "GradeBook.h"
using namespace std;
GradeBook::GradeBook(string, string){
    setCourseName(courseName);
    setProfessor(professor);
}
void GradeBook::setCourseName(string nomeDoCurso){
    this->courseName = nomeDoCurso;
}
void GradeBook::setProfessor(string professor){
    this->professor = professor;
}
string GradeBook::getCourseName(){
    return courseName;
}
string GradeBook::getProfessor(){
    return professor;
}
void GradeBook::displayMessage(){
    cout << "Welcome to the grade book for\n" << getCourseName() << "!" << endl;
    cout << "This course is presented by: " << getProfessor() << endl;
}