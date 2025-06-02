
# CR Management System

A C++-based application designed to manage Class Representatives (CRs) in educational institutions. It allows administrators to add, remove, display, search, and delete CR records efficiently through a simple command-line interface. This project was developed as part of the Data Structure and Algorithm course (CSE 206) at Green University of Bangladesh.
### What is CR or Who is a CR:
A Class Representative (CR) in educational institutions is a student elected or appointed to serve as a bridge between the student body and the faculty or administration. The role of a CR is vital in ensuring smooth communication and representation within the academic environment. Their responsibilities typically include:

- **Communication:** Acting as a channel to relay information, such as announcements or updates, from teachers to students, and conveying student concerns or suggestions back to the faculty.
- **Representation:** Speaking on behalf of their classmates in meetings with faculty or administration, ensuring that the collective voice of the students is heard.
- **Organization:** Helping to coordinate class-related activities, such as events, study groups, or projects, to build a stronger sense of community among students.
- **Support:** Assisting peers by sharing resources like notes or helping with academic queries, contributing to a supportive learning environment.
- **Feedback:** Collecting feedback from students about teaching methods, course materials, or facilities and passing it on to the appropriate authorities for improvement.
- **Conflict Resolution:** Occasionally stepping in to mediate disputes among students or between students and faculty to maintain harmony.
The specific duties of a CR may vary depending on the institution, but their core purpose is to enhance the educational experience by ensuring student needs are addressed and their perspectives are considered.

## Features

- **Add CR:** Input details like student ID, name, batch, contact info, and courses.
- **Remove CR:** Remove a CR by name.
- **Show CR List:** Display a sorted list of all CRs based on batch.
- **Search CR by Student ID:** Find and display details of a CR using their student ID.
- **Delete All CRs:** Clear all CR records from the system.

## Installation

To run this application, you need a C++ compiler installed on your system. Follow these steps:

1. **Install a C++ compiler:**
   - For Windows: [MinGW](http://www.mingw.org/) or [Visual C++](https://visualstudio.microsoft.com/vs/features/cplusplus/)
   - For macOS: [Xcode Command Line Tools](https://developer.apple.com/xcode/) or [GCC](https://gcc.gnu.org/)
   - For Linux: [GCC](https://gcc.gnu.org/) or [Clang](https://clang.llvm.org/)

   **Note:** This project requires a C++11 or later compiler due to the use of features like `std::stoi`.

2. **Clone the repository:**
   ```bash
   git clone https://github.com/yourusername/your-repo-name.git
   ```

3. **Navigate to the project directory:**
   ```bash
   cd your-repo-name
   ```

4. **Compile the code:**
   - For MinGW or GCC:
     ```bash
     g++ crmanagementsystem.cpp -o crmanagementsystem
     ```
   - For Visual C++:
     ```bash
     cl crmanagementsystem.cpp
     ```

5. **Run the application:**
   - For MinGW or GCC:
     ```bash
     ./crmanagementsystem
     ```
   - For Visual C++:
     ```bash
     crmanagementsystem.exe
     ```

## Usage

Once the application is running, you will see a menu with the following options:

1. **Add CR:** Enter details to add a new CR.
2. **Remove CR:** Enter the name of the CR to remove.
3. **Show CR List:** View a sorted list of all CRs.
4. **Search CR by Student ID:** Enter a student ID to find and display CR details.
5. **Delete All CRs:** Clear all CR records.
6. **Exit:** Close the application.

Follow the on-screen prompts to interact with the system. Example interaction:

```
CR Management System
1. Add CR
2. Remove CR
3. Show CR List
4. Search CR by Student ID
5. Delete All CRs
6. Exit
Enter option: 1
Enter CR Student ID: 23xxxxxxx
Enter CR Name: Jamil
Enter CR Batch: 23x
Enter CR Contact Info: 015...example@gmail.com
Enter CR Courses with Section (separated by comma): gde201,cse301
CR added successfully!
```

## Implementation Details

The system uses a `std::vector` to store `CR` structs, each containing fields for student ID, name, batch, contact info, and a vector of courses. Standard C++ algorithms (e.g., `std::sort` and `std::find_if`) are used for sorting and searching the CR list.

## Limitations

- **No data persistence:** Data is lost when the program closes.
- **Limited functionality:** Basic operations only; no editing or advanced features.
- **Single-user system:** No authentication or access control.
- **Basic error handling:** May not cover all edge cases.

## Future Work

- Implement data persistence using files or a database.
- Add user authentication and access control.
- Enhance functionality with editing capabilities and reporting features.
- Improve error handling and input validation.

## Contributing

Contributions are welcome! Please fork the repository and submit a pull request with your changes.

## License

This project is licensed under the MIT License. See the [LICENSE](LICENSE) file for details.

## Contact

For questions or feedback, please contact me or open an issue on GitHub.

---

**Note:** Replace placeholders like `yourusername`, `your-repo-name`, and `[your email]` with actual values specific to your project setup.
