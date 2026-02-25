#include <iostream>
#include <string>
#include <vector>

using namespace std;
  // Person is a base class and there are two derived classes student,faculty.
class Course;
class Assignment;
class Club;

class Person
{
protected:
	int student_id;
	string name;
	string email;
	string phone_no;
public:
	Person()
	{
		student_id = 0;
		name = "";
		email = "";
		phone_no = "";
	}
	Person(int si, string n, string e, string pn)
	{
		student_id = si;
		name = n;
		email = e;
		phone_no = pn;
	}
	string getName()
	{
		return name;
	}
};
    
       // Inherited class from Person.
class Assignment;
class Course;
class Club;

class Student:public Person
{
private:
	vector<Assignment*> submitted_assignment;
	vector<Club*> joined_club;
public:
	Student(int si, string n, string e, string p):Person(si,n,e,p){}
	void submitted_assignments(Assignment* assignment) 
	{
		if (assignment == nullptr) 
		{
			cout << "Error: Cannot submit a null assignment." << endl;
			return;
		}

		// Check if the assignment is already submitted
		for (Assignment* submitted : submitted_assignment) 
		{
			if (submitted == assignment) 
			{
				cout << "Error: Assignment already submitted." << endl;
				return;
			}
		}

		submitted_assignment.push_back(assignment);
		cout << "Assignment submitted successfully." << endl;
	}

	void join_club(Club* club) {
		// Check if the club is already joined
		for (Club* joined_club : joined_club) {
			if (joined_club == club) {
				cout << "Student is already a member of the club." << endl;
				return;
			}
		}

		// If not already joined, add the club to the joined clubs vector
		joined_club.push_back(club);
		cout << "Student joined the club successfully." << endl;
	}

};

     // Inherited class from Person.

class Faculty:public Person
{
private:
	vector<Course*> course_taught;
	vector<Student*> supervised_student;
public:
	Faculty(int si, string n, string e, string p) :Person(si, n, e, p){}

	void teach_course(Course* course) {
		// Check if the course is already being taught by the faculty
		for (Course* taught_course : course_taught) {
			if (taught_course == course) {
				cout << "Faculty member is already teaching the course." << endl;
				return;
			}
		}

		// Associate the course with the faculty member
		course_taught.push_back(course);
		cout << "Faculty member is now teaching the course." << endl;
	}
	void supervised_project(Student* student) {
		// Check if the student is already being supervised
		for (Student* supervised_student : supervised_student) {
			if (supervised_student == student) {
				cout << "Faculty member is already supervising the student's project." << endl;
				return;
			}
		}

		// Associate the student with the faculty member for supervision
		supervised_student.push_back(student);
		cout << "Faculty member is now supervising the student's project." << endl;
	}


};

