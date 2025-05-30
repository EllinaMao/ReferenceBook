#include "ReferenceBook.h"
using namespace std;
void ReferenceBook::findByName(const std::string& name) const
{
    bool found = false;
    for (auto it = pages.cbegin(); it != pages.cend(); ++it) {
        if (it->getFirmName() == name) {
            it->display();
            found = true;
        }
    }
    if (!found) {
		throw std::runtime_error("No pages found with the firm name: " + name);
    }
}

void ReferenceBook::printAll() const
{
    if (pages.empty()) {
		throw std::runtime_error("No pages in the reference book.");
    }
    for (auto it = pages.cbegin(); it != pages.cend(); ++it) {
        it->display();
    }
}