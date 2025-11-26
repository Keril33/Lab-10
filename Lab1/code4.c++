#include "pch.h"
#include <windows.h>
using namespace System;
int main(array<String^>^ args) {
SetConsoleOutputCP(65001);
SetConsoleCP(65001);
// Запит на введення рядка від користувача
Console::Write("введіть рядок: ");
String^ input = Console::ReadLine()->Trim();
String^ reversed = "";
for (int i = input->Length - 1; i >= 0; i--)
{
reversed += input[i];
}
Console::WriteLine();
Console::WriteLine("Рядок у зворотньому порядку: {0}", reversed);
return 0;
}