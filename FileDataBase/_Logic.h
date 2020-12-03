#ifndef _LOGIC_H
#define _LOGIC_H

#include <string>
#include <fstream>
#include <sstream>
#include <vector>
using namespace std;

/// <summary>
/// Логика сохранения в файле
/// </summary>
// Метод для сплита строки (формирование массива, который убирает делитель)
std::vector<std::string> split(const std::string& s, char delim);

#endif