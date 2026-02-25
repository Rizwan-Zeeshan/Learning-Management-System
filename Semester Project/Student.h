#include <iostream>
#include <string>
#include <vector>


using namespace std;

class Course;    // Forward Declaration.
class Assignment;
class Club;

class Student
{
private:
	int student_id;
	string name;
	string email;
	string phone_no;
	vector<Course*> enrolled_course;
	vector<Assignment*> submitted_assignment;
	vector<Club*> joined_club;
public:
	Student(int si, string n, string e, string p)
	{
		student_id = si;
		name = n;
		email = e;
		phone_no = p;
	}
	void enrol_in_course(Course* course )
	{
		enrolled_course.push_back(course);
	}
	void submitted_assignment(Assignment* assignment)
	{
		submitted_assignment.push_back(assignment);
	}
	void join_club(Club* club)
	{
		joined_club.push_back(club);
	}

};
