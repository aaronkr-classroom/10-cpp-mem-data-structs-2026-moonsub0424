// letter_grade.cpp
#include <string>
#include <iostream>
#include <cstddef> // size_t 때문에

using namespace std;

string letter_grade(double grade) {
	// 각 범위를 구분하는 점수
	static const double numbers[] = {
		97, 94, 90, 87, 84, 80, 77 ,74, 60, 0
	};

	// 문자 등급의 명칭
	static const char* const letters[] = {
		"A+", "A", "A-", "B+", "B", "B-", "C+", "C", "C-", "D", "F"
	};

	// 배열 크기와 요소 하나의 크기를 사용하여
	// 각 범위를 구분하는 점수 개수를 구함
	static const size_t ngrades =
		sizeof(numbers) / sizeof(*numbers);

	// 주어진 최종 점수에 해당하는 문자 등급을 찾아서 반환
	for (size_t i = 0; i < ngrades; ++i) {
		if (grade >= numbers[i])
			return letters[i];
	}

	return "?\ ?\ ?";
}

int main(void) {
	int g;
	cout << "Enter your grade: >>> ";
	cin >> g;
	string ltr = letter_grade(g);

	cout << "You got: " << ltr << endl;
	return 0;
}
