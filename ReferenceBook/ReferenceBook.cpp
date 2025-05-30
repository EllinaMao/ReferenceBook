#include "ReferenceBook.h"
using namespace std;


void ReferenceBook::printAll() const
{
    if (pages.empty()) {
		throw std::runtime_error("No pages in the reference book.");
    }
	cout << "Reference Book pages: " << endl;
    for (auto it = pages.cbegin(); it != pages.cend(); ++it) {
        it->display();
    }
}


void ReferenceBook::saveToFile(const std::string& filename) const {  
    std::ofstream out(filename);  
  
    if (!out) {
        throw std::runtime_error("Can't open file for writing");
    }
    nlohmann::json j;  
    j["pages"] = pages; 
    out << j.dump(2);
}



void ReferenceBook::loadFromFile(const std::string& filename) {
    std::ifstream in(filename);
    if (!in) { throw std::runtime_error("Can't open file for reading"); }
    nlohmann::json j;
    in >> j;
    pages.clear();
    for (auto& item : j.at("pages")) {
        pages.push_back(item.get<RFPage>());
    }
}

    