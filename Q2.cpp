#include <iostream>

using namespace std;

int main() {
  // Get student's full name
  string fullName;
  cout << "Enter the student's full name: ";
  getline(cin, fullName);

  // Get student's course
  string course;
  cout << "Enter the student's course: ";
  cin >> course;

  // Get student's score
  double score;
  cout << "Enter the student's score: ";
  cin >> score;

  // Determine the student's grade
  string grade;
  if (score >= 70) {
    grade = "A";
  } else if (score >= 60) {
    grade = "B";
  } else if (score >= 50) {
    grade = "C";
  } else if (score >= 40) {
    grade = "D";
  } else {
    grade = "F";
  }

  // Display the student's full name and grade
  cout << "Student's name: " << fullName << endl;
  cout << "Course: " << course << endl;
  cout << "Grade: " << grade << endl;

  return 0;
}
