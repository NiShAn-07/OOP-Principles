//#include <iostream>
//using namespace std;
//
//class clsPerson {
//private:
//    int _ID;
//    string _FirstName;
//    string _LastName;
//    string _Email;
//    string _Phone;
//
//public:
//    // Constructor «› —«÷Ì („ƒﬁ « ·«” Œœ«„Â „⁄ «·Ê—«À…)
//    clsPerson() {}
//
//    // Constructor „⁄ »«—«„Ì —« 
//    clsPerson(int ID, string FirstName, string LastName, string Email, string Phone) {
//        _ID = ID;
//        _FirstName = FirstName;
//        _LastName = LastName;
//        _Email = Email;
//        _Phone = Phone;
//    }
//
//    // Read Only Property
//    int ID() { return _ID; }
//
//    // FirstName
//    void setFirstName(string FirstName) { _FirstName = FirstName; }
//    string FirstName() { return _FirstName; }
//
//    // LastName
//    void setLastName(string LastName) { _LastName = LastName; }
//    string LastName() { return _LastName; }
//
//    // Email
//    void setEmail(string Email) { _Email = Email; }
//    string Email() { return _Email; }
//
//    // Phone
//    void setPhone(string Phone) { _Phone = Phone; }
//    string Phone() { return _Phone; }
//
//    // FullName
//    string FullName() { return _FirstName + " " + _LastName; }
//
//    // ÿ»«⁄… »Ì«‰«  «·‘Œ’
//    void Print() {
//        cout << "\nInfo:";
//        cout << "\n___________________";
//        cout << "\nID       : " << _ID;
//        cout << "\nFirstName: " << _FirstName;
//        cout << "\nLastName : " << _LastName;
//        cout << "\nFull Name: " << FullName();
//        cout << "\nEmail    : " << _Email;
//        cout << "\nPhone    : " << _Phone;
//        cout << "\n___________________\n";
//    }
//
//    // ≈—”«· »—Ìœ ≈·ﬂ —Ê‰Ì
//    void SendEmail(string Subject, string Body) {
//        cout << "\nThe following message sent successfully to email: " << _Email;
//        cout << "\nSubject: " << Subject;
//        cout << "\nBody: " << Body << endl;
//    }
//
//    // ≈—”«· —”«·… ‰’Ì…
//    void SendSMS(string TextMessage) {
//        cout << "\nThe following SMS sent successfully to phone: " << _Phone;
//        cout << "\n" << TextMessage << endl;
//    }
//};
//
//
//// ﬂ·«” «·„ÊŸ› Ì—À „‰ «·‘Œ’
//class clsEmployee : public clsPerson {
//private:
//    string _Title;
//    string _Department;
//    float _Salary;
//
//public:
//    // Title
//    void setTitle(string Title) { _Title = Title; }
//    string Title() { return _Title; }
//
//    // Department
//    void setDepartment(string Department) { _Department = Department; }
//    string Department() { return _Department; }
//
//    // Salary
//    void setSalary(float Salary) { _Salary = Salary; }
//    float Salary() { return _Salary; }
//};
//
//
//int main() {
//    clsEmployee Employee1;
//
//    Employee1.setFirstName("Mohammed");
//    Employee1.setLastName("Abu-Hadhoud");
//    Employee1.setEmail("a@a.com");
//
//    Employee1.Print();
//    Employee1.SendEmail("Hi", "How are you?");
//    Employee1.setSalary(5000);
//
//    cout << "Salary is: " << Employee1.Salary();
//
//    // «·„ÌÀÊœ Print Â‰« Ìÿ»⁄ ›ﬁÿ »Ì«‰«  «·‹ Base Class
//    Employee1.Print();
//
//    system("pause>0");
//    return 0;
//}
