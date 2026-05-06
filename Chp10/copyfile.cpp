// copy_file.cpp
#include <fstream>
#include <string>

using namespace std;

int main(void) {
	ifstream infile("in.txt"); // 지금 만들어야 하다
	ofstream outfile("out-again.txt"); // 지금 없다

	string s;

	while (getline(infile, s))
		outfile << s << endl;

	return 0;
}
