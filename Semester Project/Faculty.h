#include <iostream>
#include <vector>

using namespace std;

class Course;
class Student;

class Faculty
{
private:
	int faculty_id;
	string name;
	string email;
	string phone_no;
	vector<Course*>courses_taught;
	vector<Student*>supervised_student;
public:
	Faculty(int fi, string n, string e, string pn)
	{
		faculty_id = fi;
		name = n;
		email = e;
		phone_no = pn;
	}
	void tech_course(Course* course)
	{
		courses_taught.push_back(course);
	}
	void supervised_project(Student* student)
	{
		supervised_student.push_back(student);
	}


};
