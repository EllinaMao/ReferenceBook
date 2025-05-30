/*
Задание 
Создать класс СПРАВОЧНИК со следующими полями:

Название фирмы
Владелец
Телефон
Адрес
Род деятельности
Реализовать следующие возможности:

Поиск по названию
Поиск по владельцу
Поиск по номеру телефона
Поиск по роду деятельности
Показ всех записей и добавление
Вся информация, должна сохранятся в файле, должна быть реализована возможность добавления новых данных.
*/

#include <iostream>
#include "RFPage.h"
#include "ReferenceBook.h"
#include "ReferenceBookFind.h"

using namespace std;

int main()
{

    ReferenceBook book;
    ReferenceBook book2;

    book2.loadFromFile("book.json");
    book2.printAll();


    book.addPage(RFPage("FirmA", "Owner1", "12345", "Address1", "IT"));
    book.addPage(RFPage("FirmA", "Owner1", "12345", "Address1", "IT"));
    book.addPage(RFPage("FirmA", "Owner1", "12345", "Address1", "IT"));
    book.addPage(RFPage("FirmA", "Owner3", "54321", "Address3", "IT"));
    book.addPage(RFPage("FirmB", "Owner2", "67890", "Address2", "Finance"));
    book.addPage(RFPage("FirmC", "Owner4", "98765", "Address4", "Healthcare"));

    book.printAll ();

    ReferenceBookFind finded;

    //Вызываем метод поиска по названию фирмы
    finded.findByName(book, "FirmA");
    //Показываем найденные результаты
    finded.showFounded();
    
    book.saveToFile("book.json");

    return 0;
}

