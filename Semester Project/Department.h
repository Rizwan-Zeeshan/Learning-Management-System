
class Course;
class Faculty;

class Department
{
private:
	int department_id;
	string name;
	string head_of_department;
	vector<Course* > courses_offered;
	vector<Faculty *>faculty_members;
public:
	Department(int di,string n,string Hod)
	{
		department_id = di;
		name = n;
		head_of_department = Hod;
	}
	void add_course(Course* course) {
		// Check if the course is already added to the department
		for (Course* added_course : courses_offered) {
			if (added_course == course) {
				cout << "Course is already added to the department." << endl;
				return;
			}
		}

		// Add the course to the department
		courses_offered.push_back(course);
		cout << "Course added to the department successfully." << endl;
	}
	void add_faculty(Faculty* faculty) {
		// Check if the faculty member is already added to the department
		for (Faculty* added_faculty : faculty_members) {
			if (added_faculty == faculty) {
				cout << "Faculty member is already added to the department." << endl;
				return;
			}
		}

		// Add the faculty member to the department
		faculty_members.push_back(faculty);
		cout << "Faculty member added to the department successfully." << endl;
	}

};
