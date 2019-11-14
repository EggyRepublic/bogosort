#include "Sort.h"

Sort::Sort(int b) {
	bars = b;
}

std::ofstream& operator<<(std::ofstream &stream, Sort &sort) {
	stream << "<?xml version=\"1.0\" standalone=\"no\"?>" << std::endl;
	stream << "<svg width=\"1001\" height=\"1001\" version=\"1.1\" xmlns=\"http://www.w3.org/2000/svg\">" << std::endl;
	for (int i = 0; i < sort.bars; ++i) {
		stream << "<polygon points=\" " << sort.render(i)[0] << "," << sort.render(i)[1] << " "
				<< sort.render(i)[2] << "," << sort.render(i)[3] << " "
				<< sort.render(i)[4] << "," << sort.render(i)[5] << " "
				<< sort.render(i)[6] << "," << sort.render(i)[7] << " "
				<< " \"" << " style=\"fill:#" << "000000" << "\" />" << std::endl;
	}
	stream << "<line x1=\"   1.0\" y1=\"   1.0\" x2=\" 1000.0\" y2=\"   1.0\" stroke=\"black\" stroke-width=\"3\" />" << std::endl;
	stream << "<line x1=\" 1000.0\" y1=\"   1.0\" x2=\" 1000.0\" y2=\" 1000.0\" stroke=\"black\" stroke-width=\"3\" />" << std::endl;
	stream << "<line x1=\" 1000.0\" y1=\" 1000.0\" x2=\"   1.0\" y2=\" 1000.0\" stroke=\"black\" stroke-width=\"3\" />" << std::endl;
	stream << "<line x1=\"   1.0\" y1=\" 1000.0\" x2=\"   1.0\" y2=\"   1.0\" stroke=\"black\" stroke-width=\"3\" />" << std::endl;
	stream << "</svg>" << std::endl;
	return stream;
}

void Sort::print() {
	std::string outfile = "output" + std::to_string(printed) + ".svg";
	++printed;
	std::ofstream stream(outfile);
	stream << "<?xml version=\"1.0\" standalone=\"no\"?>" << std::endl;
	stream << "<svg width=\"1001\" height=\"1001\" version=\"1.1\" xmlns=\"http://www.w3.org/2000/svg\">" << std::endl;
	for (int i = 0; i < bars; ++i) {
		stream << "<polygon points=\" " << render(i)[0] << "," << render(i)[1] << " "
				<< render(i)[2] << "," << render(i)[3] << " "
				<< render(i)[4] << "," << render(i)[5] << " "
				<< render(i)[6] << "," << render(i)[7] << " "
				<< " \"" << " style=\"fill:#" << "000000" << "\" />" << std::endl;
	}
	stream << "<line x1=\"   1.0\" y1=\"   1.0\" x2=\" 1000.0\" y2=\"   1.0\" stroke=\"black\" stroke-width=\"3\" />" << std::endl;
	stream << "<line x1=\" 1000.0\" y1=\"   1.0\" x2=\" 1000.0\" y2=\" 1000.0\" stroke=\"black\" stroke-width=\"3\" />" << std::endl;
	stream << "<line x1=\" 1000.0\" y1=\" 1000.0\" x2=\"   1.0\" y2=\" 1000.0\" stroke=\"black\" stroke-width=\"3\" />" << std::endl;
	stream << "<line x1=\"   1.0\" y1=\" 1000.0\" x2=\"   1.0\" y2=\"   1.0\" stroke=\"black\" stroke-width=\"3\" />" << std::endl;
	stream << "</svg>" << std::endl;
}


void Sort::print(std::ofstream &stream) {
	stream << "<?xml version=\"1.0\" standalone=\"no\"?>" << std::endl;
	stream << "<svg width=\"1001\" height=\"1001\" version=\"1.1\" xmlns=\"http://www.w3.org/2000/svg\">" << std::endl;
	for (int i = 0; i < bars; ++i) {
		stream << "<polygon points=\" " << render(i)[0] << "," << render(i)[1] << " "
				<< render(i)[2] << "," << render(i)[3] << " "
				<< render(i)[4] << "," << render(i)[5] << " "
				<< render(i)[6] << "," << render(i)[7] << " "
				<< " \"" << " style=\"fill:#" << "000000" << "\" />" << std::endl;
	}
	stream << "<line x1=\"   1.0\" y1=\"   1.0\" x2=\" 1000.0\" y2=\"   1.0\" stroke=\"black\" stroke-width=\"3\" />" << std::endl;
	stream << "<line x1=\" 1000.0\" y1=\"   1.0\" x2=\" 1000.0\" y2=\" 1000.0\" stroke=\"black\" stroke-width=\"3\" />" << std::endl;
	stream << "<line x1=\" 1000.0\" y1=\" 1000.0\" x2=\"   1.0\" y2=\" 1000.0\" stroke=\"black\" stroke-width=\"3\" />" << std::endl;
	stream << "<line x1=\"   1.0\" y1=\" 1000.0\" x2=\"   1.0\" y2=\"   1.0\" stroke=\"black\" stroke-width=\"3\" />" << std::endl;
	stream << "</svg>" << std::endl;
}
