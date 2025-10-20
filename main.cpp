#include <iostream>
#include <string>
using namespace std;

int main(){
//var
    int selected_dep, selected_sub, grade;
    string subject_container, remarks_container,department_container;

//I
    cout << "==== STUDENT GRADING SYSTEM ====" << "\n";
    cout << "Select Department:" << "\n";
    cout << "[1] BSIT" << "\n";
    cout << "[2] BSOA" << "\n";
    cout << "Enter department number: ";
        cin >> selected_dep;

//Process
    switch(selected_dep){
    case 1:
        department_container = "BSIT";
        cout << "\n" << "Enter Subject Code:" << "\n";
        cout << "[1] Programming 1" << "\n";
        cout << "[2] Database Management" << "\n";
        cout << "Enter Subject Number: ";
            cin >> selected_sub;
            switch(selected_sub){
            case 1:
                subject_container = "Programming 1";
            break;
            case 2:
                subject_container = "Database Management";
            break;
            default:
                subject_container = "Invalid User Input";
            }
        cout << "Enter grade (0 - 100): ";
            cin >> grade;
    break;

    case 2:
        department_container = "BSOA";
        cout << "\n" << "Enter Subject Code:" << "\n";
        cout << "[1] Business Communication" << "\n";
        cout << "[2] Office Procedures" << "\n";
        cout << "Enter Subject Number: ";
            cin >> selected_sub;
            switch(selected_sub){
            case 1:
                subject_container = "Business Communication";
            break;
            case 2:
                subject_container = "Office Procedures";
            break;
            default:
                subject_container = "Invalid User Input";
            }
        cout << "Enter grade (0 - 100): ";
            cin >> grade;
    break;
    default:
        department_container = "Invalid User Input";
        subject_container = "Invalid User Input";
    }

    if (grade >= 75 && grade <=100){
        if (grade >= 90 && grade <= 100){
            remarks_container = "With Honors";
        }
        else if (grade >= 85 && grade <= 89){
            remarks_container = "Very Good";
        }
        else if (grade >= 75 && grade <= 84){
            remarks_container = "Passed";
        }
        else{
            remarks_container = "Invalid User Input";
        }
    }
    else if (grade < 75 && grade >= 50){
        if (grade >= 60 && grade <= 74){
            remarks_container = "Needs Improvement";
        }
        else if (grade < 60){
            remarks_container = "Failed";
        }
        else{
            remarks_container = "Invalid Process";
        }
    }
    else{
        remarks_container = "Invalid User Input";
    }

//O
    cout << "\n" << "========== RESULT ==========" << "\n";
    cout << "Department: " << department_container << "\n";
    cout << "Subject: " << subject_container << "\n";
    cout << "Remark: " << remarks_container << "\n";
    cout << "\n" << "============================" << "\n";

    return 0;
}
