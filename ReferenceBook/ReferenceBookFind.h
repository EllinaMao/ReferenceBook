#pragma once
#include <vector>
#include <string>
#include "RFPage.h"
#include "ReferenceBook.h"

class ReferenceBookFind
{
private:
    std::vector<RFPage> founded; // Список найденных страниц
    
public:

    // Поиск по названию фирмы
    void findByName(const std::vector<ReferenceBook>& books, const std::string& name);

    // Поиск по владельцу
    void findByOwner(const std::vector<ReferenceBook>& books, const std::string& owner);

    // Поиск по номеру телефона
    void findByPhone(const std::vector<ReferenceBook>& books, const std::string& phone);

    // Поиск по роду деятельности
    void findByActivity(const std::vector<ReferenceBook>& books, const std::string& activity);
};
