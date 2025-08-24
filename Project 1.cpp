//#include<iostream>
//using namespace std;
//
//
//class ClsCalculator {
//
//private:
//	int total = 0;
//	int currentNumber;
//	int temp;
//	enum op {
//		_Add = 1, Sub = 2, Mul = 3, Div=4 , Cle=5
//	};
//	op ope;
//	
//public:
//
//	void Add(int Num) {
//
//		currentNumber = Num;
//		total += Num;
//		ope = _Add;
//
//	}
//
//	void Subtract(int Num) {
//
//		currentNumber = Num;
//		total -= Num;
//		ope = Sub;
//
//	}
//
//	void Multiply(int Num) {
//
//		currentNumber = Num;
//		total *= Num;
//		ope = Mul;
//
//	}
//
//	void Divide(int Num) {
//
//		if (Num == 0) {
//			Num = 1;
//		}
//
//		currentNumber = Num;
//		total /= Num;
//		ope = Div;
//
//	}
//
//	void Clear() {
//		ope = Cle;
//		temp = total;
//		total = 0;
//	}
//
//	void PrintResult() {
//
//
//		switch (ope) {
//		case 1:
//			cout << "\nThe Result After " << "Adding " << currentNumber << " is: " << total;
//			break;
//		case 2:
//			cout << "\nThe Result After " << "Suntracting " << currentNumber << " is: " << total;
//			break;
//		case 3:
//			cout << "\nThe Result After " << "Multiplying " << currentNumber << " is: " << total;
//			break;
//		case 4:
//			cout << "\nThe Result After " << "Dividing " << currentNumber << " is: " << total;
//			break;
//		case 5:
//			cout << "\nThe Result After " << "Clear " << temp << " is: " << total;
//			break;
//
//		}
//
//	}
//
//};
//
//
//
//
//int main() {
//
//	ClsCalculator Cal;
//	Cal.Add(10);
//	Cal.PrintResult();
//
//	Cal.Add(10);
//	Cal.PrintResult();
//
//	Cal.Subtract(10);
//	Cal.PrintResult();
//
//	Cal.Multiply(10);
//	Cal.PrintResult();
//
//	Cal.Divide(10);
//	Cal.PrintResult();
//
//	Cal.Clear();
//	Cal.PrintResult();
//
//}