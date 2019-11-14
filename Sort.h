#ifndef SORT_H_
#define SORT_H_

#include <vector>
#include <iostream>
#include <ostream>
#include <fstream>
#include <string>

class Sort {
public:
	int printed = 0;
	Sort(int b);
	void print();
	void print(std::ofstream &stream);

	void sort() {
		int count = 0;
		std::ofstream stream("output.html");
		print(stream);
		while (!sorted()) {
			rand_sort();
			print(stream);
			++count;
		}
		std::cout << "successfully sorted after " << count << " moves!" << std::endl;
	}

	void rand_sort() {
		int pos = (((float)(rand() % 10)) * (bars - 1)) / ((float) 10);
		data.push_back(data[pos]);
		std::vector<int>::iterator it = data.begin() + pos;
		data.erase(it);
	}

	bool sorted() {
		int previous = 0;
		for (int i = 0; i < bars; ++i) {
			if (data[i] < previous) {
				return false;
			}
			previous = data[i];
		}
		return true;
	}

	std::vector<int> render(int bar) {
		int length = data[bar];
		std::vector<int> *pts = new std::vector<int>;
		int x1 = bar * 100;
		int x2 = (bar + 1) * 100 - 10;
		int y = 1000 - (length * 100 + 10);
		pts->push_back(x1);
		pts->push_back(1000);

		pts->push_back(x2);
		pts->push_back(1000);

		pts->push_back(x2);
		pts->push_back(y);

		pts->push_back(x1);
		pts->push_back(y);

		return *pts;
	}

	std::vector<int> data;
	int bars;
};

std::ostream& operator<<(std::ostream &stream, Sort &sort);
#endif
