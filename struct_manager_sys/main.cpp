#include "header.h"

int main()
{
    setlocale(LC_ALL, "ru_RU.UTF-8"); // Устанавливаем только кодировку
    int again = 1;
    table *def;
    database *db = NULL;
    while (again)
    {
        printf("\033[1;36mДобро пожаловать в feSQL!\033[0m\n");
        db = loadDbInFile(db);
        printf("\033[1;32mВведите команду или введите /help\033[0m :\n");
        start(db);
        again = againProg();
    }
}