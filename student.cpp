#include <iostream>
using namespace std;

class student {

  // private class(encapsulation purposes)
private:
  int adminNumber, age, year;
  char grade;
  string name, course;

public:
  void setData(int admissionNumber, int studentAge, int yearOfStudy,
               string StudentName, string studentCourse, char studentGrade) {
    adminNumber = admissionNumber;
    age = studentAge;
    year = yearOfStudy;
    grade = studentGrade;
    name = StudentName;
    course = studentCourse;
  }
};
