#include "ReferenceBookFind.h"  

using namespace std;  

void ReferenceBookFind::findByName(const ReferenceBook& book, const std::string& name)
{
    if (name.empty()) {  
        throw invalid_argument("Name cannot be empty");  
    }  
    if (book.getPages().empty()) {  
        throw invalid_argument("Reference book is empty");  
	}
    founded.clear();  
    const auto& pages = book.getPages();  
    for (auto pageIt = pages.cbegin(); pageIt != pages.cend(); ++pageIt) {  
        if (pageIt->getFirmName() == name) {  
            founded.push_back(cref(*pageIt));  
        }  
	}
}

void ReferenceBookFind::findByOwner(const ReferenceBook& book, const std::string& owner)
{
    if (owner.empty()) {  
        throw invalid_argument("Owner cannot be empty");  
    } 

    if (book.getPages().empty()) {
        throw invalid_argument("Reference book is empty");
    }
    founded.clear();  
    const auto& pages = book.getPages();  
    for (auto pageIt = pages.cbegin(); pageIt != pages.cend(); ++pageIt) {  
        if (pageIt->getOwner() == owner) {  
            founded.push_back(cref(*pageIt));  
        }  
	}
}

void ReferenceBookFind::findByPhone(const ReferenceBook& book, const std::string& phone)
{
    if (phone.empty()) {  
        throw invalid_argument("Phone cannot be empty");  
    }  
    if (book.getPages().empty()) {  
        throw invalid_argument("Reference book is empty");  
    }
    founded.clear();  
    const auto& pages = book.getPages();  
    for (auto pageIt = pages.cbegin(); pageIt != pages.cend(); ++pageIt) {  
        if (pageIt->getPhone() == phone) {  
            founded.push_back(cref(*pageIt));  
        }  
	}
}


void ReferenceBookFind::findByActivity(const ReferenceBook& book, const std::string& activity)
{
    if (activity.empty()) {  
        throw invalid_argument("Activity cannot be empty");  
    }  
    if (book.getPages().empty()) {  
        throw invalid_argument("Reference book is empty");  
    }
    founded.clear();  
    const auto& pages = book.getPages();  
    for (auto pageIt = pages.cbegin(); pageIt != pages.cend(); ++pageIt) {  
        if (pageIt->getActivityType() == activity) {  
            founded.push_back(cref(*pageIt));  
        }  
	}
}

void ReferenceBookFind::showFounded() const
{  
    if (founded.empty()) {  
        cout << "No results found." << endl;  
        return;  
    }  
    for (auto pageIt = founded.cbegin(); pageIt != founded.cend(); ++pageIt) {  
        pageIt->get().display();
    }  
}

