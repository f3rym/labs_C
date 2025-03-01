#pragma once

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>

#define MaxStringSize 200 // Максимальная длинна строки
#define DefMaxRow 10      // Максимальное количество строк по умолчанию
#define DefMaxColumns 5  // Максимальное количество полей по умолчанию
#define MaxTables 10      // Максимальное количество таблиц
struct table
{
    char **valColumns;
    char ***valRow;
    char *nameTb;
    int columnsCount;
    int rowCount;
    int maxRow;
};
struct database
{
    table *tables[MaxTables];
    int tableCount;
    char *nameDb;
    int dbCount;
};


void start(database *db);

int enterEl();

database *loadDbInFile(database *db);

table *mem(char *tableName, char *columns, int isLoad);

void enterStruct(database *db);

void printStruct(database *db, int position);

int againProg();