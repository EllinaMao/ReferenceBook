#pragma once
#include <iostream>
#include <vector>
#include <string>
#include "RFPage.h"
#include "ReferenceBook.h"

class ReferenceBookFind
{
private:

    std::vector <std::reference_wrapper< const RFPage >> founded;

public:

    // Поиск по названию фирмы
    void findByName(const ReferenceBook& book, const std::string& name);

    // Поиск по владельцу
    void findByOwner(const ReferenceBook& book, const std::string& owner);

    // Поиск по номеру телефона
    void findByPhone(const ReferenceBook& book, const std::string& phone);

    // Поиск по роду деятельности
    void findByActivity(const ReferenceBook& book, const std::string& activity);

	void showFounded() const;
};
