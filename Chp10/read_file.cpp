//read_file.cpp (concat_file.cpp)
#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main(int argc, char** argv) {
	int fail_count = 0;

	// 주어진 앞 파일의 동작을 실행
	for (int i = 1; i < argc; ++i) {
		ifstream in(argv[i]); // 인수 있으면 파일 필요해

		// 파일이 존재하면 해당 파일의 내용을 출력하고
		// 그렇지 않으면 오류 메세지를 생성
		if (in) {
			string s;
			while (getline(in, s)) {
				cout << s << endl;
			}
		}
		else {
			cerr << "Cannao open file " << argv[i] << endl;
			++fail_count;
		}
	}
	return fail_count;
}
