#pragma once
#include <vector>
#include <string>
#include "RFPage.h"
#include "ReferenceBook.h"

class ReferenceBookFind
{
public:
    // Поиск по названию фирмы
    static std::vector<const RFPage*> findByName(const std::vector<RFPage>& pages, const std::string& name);

    // Поиск по владельцу
    static std::vector<const RFPage*> findByOwner(const std::vector<RFPage>& pages, const std::string& owner);

    // Поиск по номеру телефона
    static std::vector<const RFPage*> findByPhone(const std::vector<RFPage>& pages, const std::string& phone);

    // Поиск по роду деятельности
    static std::vector<const RFPage*> findByActivity(const std::vector<RFPage>& pages, const std::string& activity);
};
