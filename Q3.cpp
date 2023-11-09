#include <iostream>

using namespace std;

int main() {
  string fullName, course;
  int score;

  // Prompt the user to enter the full name of the student, the course and the score.
  cout << "Enter the full name of the student: ";
  cin >> fullName;
  cout << "Enter the course: ";
  cin >> course;
  cout << "Enter the score: ";
  cin >> score;

  // Validate the score.
  if (score < 0 || score > 100) {
    cout << "Invalid score." << endl;
    return 1;
  }

  // Determine the grade of the student.
  string grade;
  switch (score) {
    case 70 ... 100:
      grade = "A";
      break;
    case 60 ... 69:
      grade = "B";
      break;
    case 50 ... 59:
      grade = "C";
      break;
    case 40 ... 49:
      grade = "D";
      break;
    default:
      grade = "F";
      break;
  }

  // Print out the full name and grade of the student.
  cout << "Student's full name: " << fullName << endl;
  cout << "Course: " << course << endl;
  cout << "Grade: " << grade << endl;

  return 0;
}
