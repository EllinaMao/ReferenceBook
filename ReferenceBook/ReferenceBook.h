#pragma once
#include <string>
#include <vector>
#include <iostream>
#include "RFPage.h"
/*
Поиск по названию
Поиск по владельцу
Поиск по номеру телефона
Поиск по роду деятельности
Показ всех записей и добавление
Вся информация, должна сохранятся в файле, должна быть реализована возможность добавления новых данных.
*/

class ReferenceBook {
private:
	std::vector<RFPage> pages; // Collection of pages in the book
public:
	ReferenceBook() = default; // Default constructor
	explicit ReferenceBook(const std::vector<RFPage>& pages) : pages(pages) {}
	void addPage(const RFPage& page) {
		pages.push_back(page);
	}
	
	void findByName(const std::string& name) const;
	void printAll() const;

};