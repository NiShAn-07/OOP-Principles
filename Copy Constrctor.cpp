//#include <iostream>
//using namespace std;
//
//class clsAddress {
//
//private:
//    string _AddressLine1;
//    string _AddressLine2;
//    string _POBox;
//    string _ZipCode;
//
//public:
//
//    // Constructor «·√”«”Ì
//    clsAddress(string AddressLine1, string AddressLine2, string POBox, string ZipCode) {
//        _AddressLine1 = AddressLine1;
//        _AddressLine2 = AddressLine2;
//        _POBox = POBox;
//        _ZipCode = ZipCode;
//    }
//
//    // Copy Constructor
//    clsAddress(const clsAddress& Other) {  //Œ Ï ·Ê „«ﬂ »‰«Â «·ﬂÊ„»«Ì·— Ì”ÊÌÂ «› —«÷Ì«
//        _AddressLine1 = Other._AddressLine1;
//        _AddressLine2 = Other._AddressLine2;
//        _POBox = Other._POBox;
//        _ZipCode = Other._ZipCode;
//    }
//
//    // Setters
//    void SetAddressLine1(string AddressLine1) {
//        _AddressLine1 = AddressLine1;
//    }
//
//    void SetAddressLine2(string AddressLine2) {
//        _AddressLine2 = AddressLine2;
//    }
//
//    void SetPOBox(string POBox) {
//        _POBox = POBox;
//    }
//
//    void SetZipCode(string ZipCode) {
//        _ZipCode = ZipCode;
//    }
//
//    // Getters
//    string AddressLine1() {
//        return _AddressLine1;
//    }
//
//    string AddressLine2() {
//        return _AddressLine2;
//    }
//
//    string POBox() {
//        return _POBox;
//    }
//
//    string ZipCode() {
//        return _ZipCode;
//    }
//
//    // ÿ»«⁄… »Ì«‰«  «·⁄‰Ê«‰
//    void Print() {
//        cout << "\nAddress Details:\n";
//        cout << "------------------------";
//        cout << "\nAddressLine1 : " << _AddressLine1 << endl;
//        cout << "AddressLine2 : " << _AddressLine2 << endl;
//        cout << "POBox        : " << _POBox << endl;
//        cout << "ZipCode      : " << _ZipCode << endl;
//    }
//};
//
//int main() {
//    clsAddress Address1("Queen Alia Street", "B 303", "11192", "5555");
//    Address1.Print();
//
//    // Â‰« Ì „ «” Œœ«„ «·‹ Copy Constructor
//    clsAddress Address2 = Address1;
//    Address2.Print();
//
//    system("pause>0");
//    return 0;
//}
