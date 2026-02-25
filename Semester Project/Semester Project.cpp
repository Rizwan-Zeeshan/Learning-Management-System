#include "Person.h"
#include "Course.h"
#include "Department.h"


void display();

int main()
{
    display();

    return 0;
}


void display()
{
    cout << "\t\t\t\t*************************************************" << endl;
    cout << "\t\t\t\t****                                         ****" << endl;
    cout << "\t\t\t\t****    STUDENT DATABASE MANENGEMENT SYSTEM  ****" << endl;
    cout << "\t\t\t\t****                                         ****" << endl;
    cout << "\t\t\t\t*************************************************" << endl;
    int choice;
    do
    {
        cout << "0. Register Course " << endl;
        cout << "1. Availible Course " << endl;
        cout << "2. Registered Course " << endl;
        cout << "3. Submit Assignment " << endl;
        cout << "4. View Attendence " << endl;
        cout << "5. Library Resources " << endl;
        cout << "6. Join Club " << endl;
        cout << "7. Participate Event " << endl;
        cout << "8. Projects " << endl;
        cout << "9. Feedback " << endl;
        cout << "10. Exit " << endl;
        cout << "Enter your choice(0-10): ";
        cin >> choice;

        if (choice > 10)
        {
            cout << "You entered choice out of range, please enter again: ";
            cin >> choice;
        }
        switch (choice)
        {
        case 0:
            cout << "The register course is empty, please register course" << endl;
            break;
        case 1:
            cout << "The availible course is given below. " << endl;
           // displayCourseData();
            break;
        case 2:
            
            break;
        case 3:
            
            break;
        case 4:
            
            break;
        case 5:
            
            break;
        case 6:
            
            break;
        case 7:
            
            break;
        case 8:
            
            break;
        case 9:
          
            break;
        case 10:
           
            break;
        default:
            cout << "Invalid choice, please try again." << endl;
        }

    } while (choice != 11);
}
