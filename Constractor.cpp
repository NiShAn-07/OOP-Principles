/*
هذا الكود يحتوي على تعريف كلاس (clsAddress) يمثل عنوان سكن أو مكتب.

🔹 المفاهيم المستخدمة:

1. Constructor (المنشئ):
   - هو دالة خاصة تُستدعى تلقائيًا عند إنشاء كائن من الكلاس.
   - الهدف منه هو تهيئة (Initialize) القيم الأولية للمتغيرات الخاصة (مثل _AddressLine1).
   - في هذا المثال، يستقبل الكونستركتر 4 قيم ويخزنها في متغيرات الكلاس.

2. Private Members:
   - المتغيرات المعرفة كـ `private` لا يمكن الوصول لها مباشرة من خارج الكلاس.

3. Setters & Getters:
   - Setters: دوال لتعديل قيم المتغيرات الخاصة.
   - Getters: دوال لاسترجاع قيم المتغيرات الخاصة.

4. Print Method:
   - دالة تقوم بطباعة جميع البيانات الموجودة داخل الكائن بشكل منظم.

5. Main Function:
   - يتم إنشاء كائن من النوع clsAddress وتتم طباعة بياناته باستخدام الدالة Print.
*/


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
//    // Constructor
//    clsAddress(string AddressLine1, string AddressLine2, string POBox, string ZipCode) {
//        _AddressLine1 = AddressLine1;
//        _AddressLine2 = AddressLine2;
//        _POBox = POBox;
//        _ZipCode = ZipCode;
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
//    // Print Method
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
//    system("pause>0");
//    return 0;
//}
