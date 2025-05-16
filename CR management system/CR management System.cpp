#include <iostream>
#include <vector>
#include <algorithm>
#include <sstream>
#include <limits>

using namespace std;

struct CR {
    string studentID;
    string name;
    string batch;
    string contactInfo;
    vector<string> courses;
};

vector<CR> crList;

void addCR() {
    CR cr;
    cout << "Enter CR Student ID: ";
    getline(cin, cr.studentID);
    cout << "Enter CR Name: ";
    getline(cin, cr.name);
    cout << "Enter CR Batch: ";
    getline(cin, cr.batch);
    cout << "Enter CR Contact Info: ";
    getline(cin, cr.contactInfo);
    cout << "Enter CR Courses With Section (separated by comma): ";
    string courseLine;
    getline(cin, courseLine);
    istringstream iss(courseLine);
    string course;
    while (iss >> course) {
        cr.courses.push_back(course);
    }
    crList.push_back(cr);
    cout << "CR added successfully!" << endl;
}

void removeCR() {
    string crName;
    cout << "Enter CR Name to remove: ";
    getline(cin, crName);
    auto it = find_if(crList.begin(), crList.end(), [crName](const CR& cr) {
        return cr.name == crName;
    });
    if (it != crList.end()) {
        crList.erase(it);
        cout << "CR removed successfully!" << endl;
    } else {
        cout << "CR not found!" << endl;
    }
}

bool compareByBatch(const CR& cr1, const CR& cr2) {
    return cr1.batch < cr2.batch;
}

void showCRList() {
    if (crList.empty()) {
        cout << "No CRs found!" << endl;
        return;
    }
    sort(crList.begin(), crList.end(), compareByBatch);
    cout << "CR List:" << endl;
    for (const CR& cr : crList) {
        cout << "Student ID: " << cr.studentID << endl;
        cout << "Name: " << cr.name << endl;
        cout << "Batch: " << cr.batch << endl;
        cout << "Contact Info: " << cr.contactInfo << endl;
        cout << "Courses: ";
        for (const string& course : cr.courses) {
            cout << course << " ";
        }
        cout << endl << "---------------------------" << endl;
    }
}

void searchCRByStudentID() {
    string studentID;
    cout << "Enter Student ID to search: ";
    getline(cin, studentID);
    auto it = find_if(crList.begin(), crList.end(), [studentID](const CR& cr) {
        return cr.studentID == studentID;
    });
    if (it != crList.end()) {
        cout << "CR found!" << endl;
        cout << "Student ID: " << it->studentID << endl;
        cout << "Name: " << it->name << endl;
        cout << "Batch: " << it->batch << endl;
        cout << "Contact Info: " << it->contactInfo << endl;
        cout << "Courses: ";
        for (const string& course : it->courses) {
            cout << course << " ";
        }
        cout << endl;
    } else {
        cout << "CR not found!" << endl;
    }
}

void deleteAllCRs() {
    crList.clear();
    cout << "All CRs deleted successfully!" << endl;
}

int main() {
    string option;
    while (true) {
        cout << "CR Management System" << endl;
        cout << "1. Add CR" << endl;
        cout << "2. Remove CR" << endl;
        cout << "3. Show CR List" << endl;
        cout << "4. Search CR by Student ID" << endl;
        cout << "5. Delete All CRs" << endl;
        cout << "6. Exit" << endl;
        cout << "Enter option: ";
        getline(cin, option);

        // Converting the option string to an integer
        int optionInt;
        try {
            optionInt = stoi(option);
        } catch (const invalid_argument& e) {
            cout << "Invalid option! Please try again." << endl;
            continue;
        }

        switch (optionInt) {
            case 1:
                addCR();
                break;
            case 2:
                removeCR();
                break;
            case 3:
                showCRList();
                break;
            case 4:
                searchCRByStudentID();
                break;
            case 5:
                deleteAllCRs();
                break;
            case 6:
                cout << " Good Bye , Have a nice day " << endl;
                return 0;
            default:
                cout << "Invalid option! Please try again." << endl;
                break;
        }
    }

    return 0;
}
