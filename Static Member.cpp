//#include <iostream>
//#include <string>
//using namespace std;
//
//class clsA {
//public:
//    int var;
//    static  int counter ; // ����� static ����� ��� ���� ��������
//
//    // Constructor
//    clsA() {
//        counter++; // �� ��� ���� ���� ���ϡ ���� ������
//    }
//
//    void Print() {
//        cout << "\nvar     = " << var << endl;
//        cout << "counter = " << counter << endl;
//    }
//};
//
//// ����� ������� static ���� ������
//int clsA::counter = 0;
//// ���� ����� �� ���� ������
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
//    // ���� ���� ������� static �� ���� A1
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
