#include "pch.h"
#include <iostream>
#include <cmath>
using namespace System;
int main(array<System::String^>^ args)
{
const double T = 1800.0;

array<int>^ tauValues = { 100, 120, 150, 170, 200, 250 };

Console::WriteLine(L"|-----------------------------------|");
Console::WriteLine(L"| Tau (\u03C4, кгс/см^2) | Діаметр (d, см) |");
Console::WriteLine(L"|-----------------------------------|");

for each(int tau in tauValues)
{
double d = Math::Sqrt(T / (0.2 * tau));

Console::Write(L"| {0,17} ", tau);
Console::WriteLine(L"| {0,18:F3} |", d);
}
Console::WriteLine(L"|-----------------------------------|");
return 0;
}