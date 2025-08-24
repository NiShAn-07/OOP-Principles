//#include <iostream>
//using namespace std;
//
//class clsPerson
//{
//private:
//    // only accessible inside this class
//    int Variabl1 = 5;
//
//    int Function1()
//    {
//        return 40;
//    }
//
//protected:
//    // accessible inside this class and in classes that inherit from it
//    int Variabl2 = 100;
//
//    int Function2()
//    {
//        return 50;
//    }
//
//public:
//    // accessible from anywhere
//    string FirstName;
//    string LastName;
//
//    string FullName()
//    {
//        return FirstName + " " + LastName;
//    }
//
//    float Function3()
//    {
//        return Function1() * Variabl1 * Variabl2;
//    }
//};
//
//int main()
//{
//    clsPerson Person1;
//
//    Person1.FirstName = "Mohammed";
//    Person1.LastName = "Abu-Hadhoud";
//
//    cout << "Person1: " << Person1.FullName() << endl;
//    cout << Person1.Function3();
//}
