#include "ReferenceBookFind.h"  
using namespace std;  

vector<const RFPage*> ReferenceBookFind::findByName(const vector<RFPage>& pages, const string& name) {  
    if (name.empty()) {  
        throw invalid_argument("Name cannot be empty");  
    }  
    if (pages.empty()) {  
        throw invalid_argument("Pages cannot be empty");  
    }  

    vector<const RFPage*> result;  
    for (auto it = pages.cbegin(); it != pages.cend(); ++it) {  
        if (it->getFirmName() == name) {  
            result.push_back(&(*it));
        }  
    }  
    return result;  
}

vector<const RFPage*> ReferenceBookFind::findByOwner(const vector<RFPage>& pages, const string& owner)
{
    if (owner.empty()) {
        throw invalid_argument("Name cannot be empty");
    }
    if (pages.empty()) {
        throw invalid_argument("Pages cannot be empty");
    }

    vector<const RFPage*> result;
    for (auto it = pages.cbegin(); it != pages.cend(); ++it) {
        if (it->getOwner() == owner) {
            result.push_back(&(*it));
        }
    }
    return result;
}
