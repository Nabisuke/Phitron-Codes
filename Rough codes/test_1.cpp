#include <bits/stdc++.h>
using namespace std;

class Student {
public:
    string name;
    int roll;
    char section;
    int math_marks;
    int clss;

    // Constructor to initialize the Student object
    Student(string name, int roll, char section, int math_marks, int clss) {
        this->name = name;
        this->roll = roll;
        this->section = section;
        this->math_marks = math_marks;
        this->clss = clss;
    }

    // Static method to compare three students and print the one with highest math_marks
    static void findTopStudent(Student s1, Student s2, Student s3) {
        Student topStudent = s1;
        if (s2.math_marks > topStudent.math_marks) {
            topStudent = s2;
        }
        if (s3.math_marks > topStudent.math_marks) {
            topStudent = s3;
        }
        cout << "The student with the highest math marks is: " << topStudent.name << " with " << topStudent.math_marks << " marks." << endl;
    }
};

int main() {
    // Creating three static Student objects
    Student rahim("Rahim", 29, 'A', 78, 9);
    Student karim("Karim", 33, 'B', 85, 9);
    Student rahman("Rahman", 40, 'C', 92, 9);

    // Print details of the students
    cout << rahim.name << " " << rahim.roll << " " << rahim.section << " " << rahim.math_marks << " " << rahim.clss << endl;
    cout << karim.name << " " << karim.roll << " " << karim.section << " " << karim.math_marks << " " << karim.clss << endl;
    cout << rahman.name << " " << rahman.roll << " " << rahman.section << " " << rahman.math_marks << " " << rahman.clss << endl;

    // Compare the three students and print the one with the highest math marks
    Student::findTopStudent(rahim, karim, rahman);

    return 0;
}
