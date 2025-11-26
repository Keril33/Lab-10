#include "pch.h"
#include <windows.h>
using namespace System;
int main(array<String^>^ args) {
SetConsoleOutputCP(65001);
SetConsoleCP(65001);

Console::Write("введіть перший рядок: ");
String^ first = Console::ReadLine()->Trim();
Console::Write("введіть другий рядок: ");
String^ second = Console::ReadLine()->Trim();

String^ result = first + " " + second;
Console::WriteLine();
Console::WriteLine("Одержаний рядок: {0}", result);
return 0;
}