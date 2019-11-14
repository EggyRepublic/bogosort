#include <iostream>
#include <string>
#include <ostream>
#include <fstream>
#include "sort.h"

int main(int argc, char* argv[]) {
	if (argc != 2) {
		std::cerr << "one parameter of array size" << std::endl;
		return 1;
	}
	Sort s(atoi(argv[1]));
	std::vector<int> temp;
	for (int i = 1; i <= atoi(argv[1]); ++i) {
		temp.push_back(i);
	}
	for (int i = 0; i < atoi(argv[1]); ++i) {
		int pos = (((float)(rand() % 10)) * (atoi(argv[1]) - 1 - i)) / ((float) 10);
		s.data.push_back(temp[pos]);
		std::vector<int>::iterator it = temp.begin() + pos;
		temp.erase(it);
	}
	s.sort();
	return 0;
}
