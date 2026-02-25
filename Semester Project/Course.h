
class Student;
class Assignment;

class Course
{
private:
	int course_id;
	string name;
	int credits;
	string instructor;
	vector<Student*> enrolled_students;
	vector<Assignment*> assignments;
public:
	Course(int ci, string n, int c, string i)
	{
		course_id = ci;
		name = n;
		credits = c;
		instructor = i;
	}
	void add_student(Student* student) {
		// Check if the student is already added to the department
		for (Student* added_student : enrolled_students) {
			if (added_student == student) {
				cout << "Student is already added to the department." << endl;
				return;
			}
		}

		// Add the student to the department
		enrolled_students.push_back(student);
		cout << "Student added to the department successfully." << endl;
	}

	void add_assignment(Assignment* assignment) {
		// Check if the assignment is already added to the course
		for (Assignment* added_assignment : assignments) {
			if (added_assignment == assignment) {
				cout << "Assignment is already added to the course." << endl;
				return;
			}
		}

		// Add the assignment to the course
		assignments.push_back(assignment);
		cout << "Assignment added to the course successfully." << endl;
	}

};