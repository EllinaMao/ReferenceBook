#include "ReferenceBookFind.h"  
using namespace std;  

void ReferenceBookFind::findByName(const vector<ReferenceBook>& books, const string& name) {
    if (name.empty()) {  
        throw invalid_argument("Name cannot be empty");  
    }  
    if (books.empty()) {
        throw invalid_argument("Pages cannot be empty");  
    }  

    founded.clear();

    for (auto bookIt = books.cbegin(); bookIt != books.cend(); ++bookIt) {
        const auto& pages = bookIt->getPages();
        for (auto pageIt = pages.cbegin(); pageIt != pages.cend(); ++pageIt) {
            if (pageIt->getFirmName() == name) {
                founded.push_back(*pageIt);
            }
        }
    }
}

void ReferenceBookFind::findByOwner(const vector<ReferenceBook>& books, const string& owner)
{
    if (owner.empty()) {
        throw invalid_argument("owner cannot be empty");
    }
    if (books.empty()) {
        throw invalid_argument("Pages cannot be empty");
    }

    founded.clear();
    for (auto bookIt = books.cbegin(); bookIt != books.cend(); ++bookIt) {
        const auto& pages = bookIt->getPages();
        for (auto pageIt = pages.cbegin(); pageIt != pages.cend(); ++pageIt) {
            if (pageIt->getOwner() == owner) {
                founded.push_back(*pageIt);
            }
        }
    }
}

void ReferenceBookFind::findByPhone(const vector<ReferenceBook>& books, const string& phone)
{
    if (phone.empty()) {
        throw invalid_argument("phone cannot be empty");
    }
    if (books.empty()) {
        throw invalid_argument("Pages cannot be empty");
    }

    founded.clear();
    for (auto bookIt = books.cbegin(); bookIt != books.cend(); ++bookIt) {
        const auto& pages = bookIt->getPages();
        for (auto pageIt = pages.cbegin(); pageIt != pages.cend(); ++pageIt) {
            if (pageIt->getPhone() == phone) {
                founded.push_back(*pageIt);
            }
        }
    }
}

void ReferenceBookFind::findByActivity(const vector<ReferenceBook>& books, const string& activity)
{
    if (activity.empty()) {
        throw invalid_argument("activity cannot be empty");
    }
    if (books.empty()) {
        throw invalid_argument("Pages cannot be empty");
    }

    founded.clear();
    for (auto bookIt = books.cbegin(); bookIt != books.cend(); ++bookIt) {
        const auto& pages = bookIt->getPages();
        for (auto pageIt = pages.cbegin(); pageIt != pages.cend(); ++pageIt) {
            if (pageIt->getActivityType() == activity) {
                founded.push_back(*pageIt);
            }
        }
    }
}
