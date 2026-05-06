// new_delete.cpp
#include <iostream>
using namespace std;

int main(void) {
	// 1. 단일 객체 동적 할당 (기본 초기화)
	int* p1 = new int; // int 하나를 위한 메모리 할당
	*p1 = 10;			//값 저장
	cout << "p1 값; " << *p1 << endl;

	// 2. 단일 객체 동적 할당 (초기값 지정)
	int* p2 = new int(20); // 20으로 초기화
	cout << "p2 값: " << *p2 << endl;

	// 3. 배열 동적 할당
	int* arr = new int[3]; // 크기 3 배열 생성

	// 배열 값 설정
	for (int i = 0; i < 3; i++) {
		arr[i] = i + 1;
	}

	// 배열 출력
	cout << "배열 값";
	for (int i = 0; i < 3; i++) {
		cout << arr[i] << " ";
	}
	cout << endl;

	// 4. 메모리 해제 (단일 객체)
	delete p1; // p1이 가리키는 메모리 해제
	delete p2; // p2가 가리키는 메모리 해제

	// 5. 메모리 해제 (배열)
	delete[] arr; // 배열 메모리 해제

	return 0;

}
