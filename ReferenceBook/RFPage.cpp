#include "RFPage.h"
using namespace std;

void RFPage::display() const
{
		cout << "Firm Name: " << firmName << endl
		<< "Owner: " << owner << endl
		<< "Phone: " << phone << endl
		<< "Address: " << address << endl
		<< "Activity Type: " << businessActivity << endl	
		<< string(15, '-') << endl;
}