//#include<iostream>
//#include<string>
//using namespace std;
//
//
//class clsPerson {
//
//private:
//	int _ID;
//	string _FirstName;
//	string _LastName;
//	string _FullName;
//	string _Email;
//	string _Phone;
//	string _Title;
//	string _Salary;
//	string _Department;
//
//public:
//
//	clsPerson(int Id , string FN, string LS , string EM, string PH , string Title ,string Salary ,string Department) {
//
//		_ID = Id;
//		_FirstName = FN;
//		_LastName = LS;
//		_Email = EM;
//		_Phone = PH;
//		_Title = Title;
//		_Salary = Salary;
//		_Department = Department;
//
//	}
//
//
//
//	int ReadID() {
//		return _ID;
//	}
//
//	void setFirstName(string FirName) {
//
//		_FirstName = FirName;
//
//	}
//
//	string GetFirstName() {
//
//		return _FirstName;
//
//	}
//
//
//	void setLastName(string LasName) {
//
//		_LastName = LasName;
//
//	}
//
//	string GetLastName() {
//
//		return _LastName;
//
//	}
//
//
//	string GetFullName() {
//
//		return _FirstName + _LastName;
//
//	}
//
//
//	void setEmail(string Emi) {
//
//		_Email = Emi;
//
//	}
//
//	string GetEmil() {
//
//		return _Email;
//
//	}
//
//
//	void setPhone(int Phon) {
//
//		_Phone = Phon;
//
//	}
//
//	string GetPhone() {
//
//		return _Phone;
//
//	}
//
//	void SetTitle(string title) {
//		_Title = title;
//			}
//
//	string GetTitle() {
//		return _Title;
//	}
//
//	void SetSalary(string Salary) {
//		_Salary = Salary;
//	}
//
//	string GetSalary() {
//		return _Salary;
//	}
//
//
//	void SetDepartment(string Dapartment) {
//		_Department = Dapartment;
//	}
//
//	string GetDepartment() {
//		return _Department;
//	}
//
//
//
//	string SendEmail(string Subject , string Message) {
//
//		return "\nThe Following Message Sent Successfully to email : " + _Email + "\nSubject : " + Subject + "\nBody : " + Message;
//
//	}
//
//
//	string SendSMS( string Message) {
//
//		return "\nThe Following SMS Sent Successfully to Phone : " + _Phone + "\nBody : " + Message;
//
//	}
//
//	void Print() {
//
//		cout << "Info :\n";
//		cout << "-------------------------\n";
//		cout << "ID : " << ReadID() << endl;
//		cout << "First Name : " << GetFirstName()<<endl;
//		cout << "Last Name : " <<GetLastName() <<endl;
//		cout << "Full Name : " <<GetFullName() <<endl;
//		cout << "Title : " << GetTitle() << endl;
//		cout << "Email : " << GetEmil()<<endl;
//		cout << "Phone : " << GetPhone()<<endl;
//		cout << "Salary : " << GetSalary() << endl;
//		cout << "Department : " << GetDepartment() << endl;
//		cout << "-------------------------\n";
//
//
//	}
//
//
//};
//
//
//
//int main() {
//
//	clsPerson P1(10 , "Abdullah " , "Shubaliy" , "Ali@gmail.com" , "053729834" ,"Abu-Shubaliy" , "17000","IT");
//	P1.Print();
//
//	cout<<P1.SendEmail("Hi" , "Hello World")<<endl;
//	cout <<endl<< P1.SendSMS("Hello World");
//	system("pause>0");
//}