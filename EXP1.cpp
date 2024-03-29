#include <iostream>
#include <string>

class Student {
private:
    std::string name;
    int rollNumber;
    std::string email;
    int semester;
    long long mobileNumber;
    std::string dateOfBirth;

public:
    void setName(const std::string& newName) {
        name = newName;
    }

    void setRollNumber(int newRollNumber) {
        rollNumber = newRollNumber;
    }

    void setEmail(const std::string& newEmail) {
        email = newEmail;
    }

    void setSemester(int newSemester) {
        semester = newSemester;
    }

    void setMobileNumber(long long newMobileNumber) {
        mobileNumber = newMobileNumber;
    }

    void setDateOfBirth(const std::string& newDateOfBirth) {
        dateOfBirth = newDateOfBirth;
    }

    std::string getName() const {
        return name;
    }

    int getRollNumber() const {
        return rollNumber;
    }

    std::string getEmail() const {
        return email;
    }

    int getSemester() const {
        return semester;
    }

    long long getMobileNumber() const {
        return mobileNumber;
    }

    std::string getDateOfBirth() const {
        return dateOfBirth;
    }

    void displayInfo() const {
        std::cout << "Name: " << name << std::endl;
        std::cout << "Roll Number: " << rollNumber << std::endl;
        std::cout << "Email: " << email << std::endl;
        std::cout << "Semester: " << semester << std::endl;
        std::cout << "Mobile Number: " << mobileNumber << std::endl;
        std::cout << "Date of Birth: " << dateOfBirth << std::endl;
    }

    // Function to take user input
    void inputInfo() {
        std::cout << "Enter student details:" << std::endl;
        std::cout << "Name: ";
        std::getline(std::cin, name);

        std::cout << "Roll Number: ";
        std::cin >> rollNumber;
        std::cin.ignore(); // Consume the newline character left in the input buffer

        std::cout << "Email: ";
        std::getline(std::cin, email);

        std::cout << "Semester: ";
        std::cin >> semester;
        std::cin.ignore(); // Consume the newline character left in the input buffer

        std::cout << "Mobile Number: ";
        std::cin >> mobileNumber;
        std::cin.ignore(); // Consume the newline character left in the input buffer

        std::cout << "Date of Birth: ";
        std::getline(std::cin, dateOfBirth);
    }
};

int main () {
    
    Student student;
    string name , rollnumber, email , semester , mobilenumber , dateOfBirth;

    student.inputInfo(name , rollnumber, email , semester , mobilenumber , dateOfBirth );

    cout << endl << "Student Information :" << endl;
    student.displayInfo();
   return 0; 
}