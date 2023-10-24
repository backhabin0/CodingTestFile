#include <iostream>
#include <string>
using namespace std;
int main() {
	int ticketNum = 0;		//º¹±Ç ¼ö
	string testNum = "20212323";
	string str="8";
	int pos = 0;
	if (testNum.find(str) != std::string::npos) {
		std::cout << "Found!" << '\n';
	}
	else {
		std::cout << "Not found" << '\n';
	}

	return 0;
}