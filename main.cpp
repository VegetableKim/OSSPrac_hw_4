#include <iostream>
using namespace std;

int main() {
	string str1, str2, str3;

	cout << "이름을 입력하세요: ";
	cin >> str1;
	cout << "학번을 입력하세요: ";
	cin >> str2;
	cout << "학과를 입력하세요: ";
	cin >> str3;

	cout << "\n<출력>\n이름: " << str1 << "\n학번: " << str2 << "\n학과: " << str3;
}
