//#include <iostream>
//#include <string>
//using namespace std;
//
//class clsA {
//public:
//    int var;
//    static  int counter ; // ãÊÛíÑ static ãÔÊÑß Èíä ÌãíÚ ÇáßÇÆäÇÊ
//
//    // Constructor
//    clsA() {
//        counter++; // ßá ãÑÉ íäÔÃ ßÇÆä ÌÏíÏ¡ äÒíÏ ÇáÚÏÇÏ
//    }
//
//    void Print() {
//        cout << "\nvar     = " << var << endl;
//        cout << "counter = " << counter << endl;
//    }
//};
//
//// ÊÚÑíİ ÇáãÊÛíÑ static ÎÇÑÌ ÇáßáÇÓ
//int clsA::counter = 0;
//// áÇÒã äÚÑİå ãä ÎÇÑÌ ÇáßáÇÓ
//
//int main() {
//    clsA A1, A2, A3;
//    A1.var = 10;
//    A2.var = 20;
//    A3.var = 30;
//
//    A1.Print();
//    A2.Print();
//    A3.Print();
//
//    // äÛíÑ ŞíãÉ ÇáãÊÛíÑ static ãä ÎáÇá A1
//    A1.counter = 500;
//
//    cout << "\nAfter changing the static member 'counter' using A1:\n";
//
//    A1.Print();
//    A2.Print();
//    A3.Print();
//
//    return 0;
//}
