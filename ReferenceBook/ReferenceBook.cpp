#include "ReferenceBook.h"
using namespace std;


void ReferenceBook::printAll() const
{
    if (pages.empty()) {
		throw std::runtime_error("No pages in the reference book.");
    }
    for (auto it = pages.cbegin(); it != pages.cend(); ++it) {
        it->display();
    }
}
