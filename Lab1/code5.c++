#include "pch.h"
#include <windows.h>
using namespace System;
int main(array<String^>^ args) {
SetConsoleOutputCP(65001);
SetConsoleCP(65001);
// Запит на введення рядка від користувача
Console::Write("введіть перший рядок: ");
String^ first = Console::ReadLine()->Trim();
Console::Write("введіть другий рядок: ");
String^ second = Console::ReadLine()->Trim();
Console::WriteLine();
int lengthFirst = first->Length;
int lengthSecond = second->Length;
if (lengthFirst > lengthSecond)
Console::WriteLine("перший рядок більший ніж другий ({0} > {1}).", first,
second);
else if (lengthFirst < lengthSecond)
Console::WriteLine("другий рядок більше ніж перший ({0} > {1}).", first,
second);
else
Console::WriteLine("рядки однакові ({0} = {1}).", first, second);
return 0;
}