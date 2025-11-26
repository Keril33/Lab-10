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
int result = String::Compare(first, second, true);
if (result < 0)
Console::WriteLine("{0} менший ніж {1}.", first, second);
else if (result > 0)
Console::WriteLine("{0} більше ніж {1}.", first, second);
else
Console::WriteLine("{0} таке саме як {1}.", first, second);
return 0;
}