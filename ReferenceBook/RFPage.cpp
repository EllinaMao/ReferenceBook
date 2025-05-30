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

void to_json(nlohmann::json& j, const RFPage& p)
{
	j = nlohmann::json{
	  {"firmName",         p.getFirmName()},
	  {"owner",            p.getOwner()},
	  {"phone",            p.getPhone()},
	  {"address",          p.getAddress()},
	  {"businessActivity", p.getActivityType()}
	};
}

void from_json(const nlohmann::json& j, RFPage& p)
{
	p = RFPage{
	  j.at("firmName").get<std::string>(),
	  j.at("owner").get<std::string>(),
	  j.at("phone").get<std::string>(),
	  j.at("address").get<std::string>(),
	  j.at("businessActivity").get<std::string>()
	};
}
