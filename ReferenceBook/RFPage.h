#pragma once
#include <string>
#include <vector>
#include <iostream>
#include <iterator>
#include <nlohmann/json.hpp> 

class RFPage{
private:
		std::string firmName;
		std::string owner;
		std::string phone;
		std::string address;
		std::string businessActivity;

public:
	RFPage() = default;
	RFPage(const std::string& firmName, const std::string& owner, const std::string& phone, const std::string& address, const std::string& activityType)
		: firmName(firmName), owner(owner), phone(phone), address(address), businessActivity(activityType) {}

	const std::string& getFirmName() const { return firmName; }
	const std::string& getOwner() const { return owner; }
	const std::string& getPhone() const { return phone; }
	const std::string& getAddress() const { return address; }
	const std::string& getActivityType() const { return businessActivity; }
	void display() const;
	
};

void to_json(nlohmann::json& j, const RFPage& p);
void from_json(const nlohmann::json& j, RFPage& p);
