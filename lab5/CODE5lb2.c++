#include "pch.h"
#include <iostream>
using namespace System;
// Функція для виведення матриці
void PrintMatrix(array<int, 2>^ matrix, String^ title)
{
Console::WriteLine(L"\n{0}:", title);
int numRows = matrix->GetLength(0);
int numCols = matrix->GetLength(1);
for (int i = 0; i < numRows; i++)
{
for (int j = 0; j < numCols; j++)
{
Console::Write(L"{0,4}", matrix[i, j]);
}
Console::WriteLine();
}
}
int main(array<System::String^>^ args)
{
// 1. Ініціалізація матриці (прикладові дані)
array<int, 2>^ A = gcnew array<int, 2>(4, 5) {
{ 10, 5, 12, 1, 8 },
{ 15, 20, 6, 9, 14 },
{ 3, 2, 7, 4, 11 },
{ 18, 16, 22, 13, 19 }
};

PrintMatrix(A, L"Початкова матриця A");
int numRows = A->GetLength(0);
int numCols = A->GetLength(1);
// 2. Пошук найменшого елемента та його індексів (i_min, j_min)
int minElement = A[0, 0];
int i_min = 0;
int j_min = 0;
for (int i = 0; i < numRows; i++)
{
for (int j = 0; j < numCols; j++)
{
if (A[i, j] < minElement)
{
minElement = A[i, j];
i_min = i;
j_min = j;
}
}
}
Console::WriteLine(L"\nНайменший елемент: {0} (Рядок: {1}, Стовпець: {2})",
minElement, i_min, j_min);
// 3. Перетворення: Занесення нулів у відповідний рядок та стовпець
// Занесення нулів у рядок i_min
for (int j = 0; j < numCols; j++)
{
A[i_min, j] = 0;
}
// Занесення нулів у стовпець j_min
for (int i = 0; i < numRows; i++)
{
A[i, j_min] = 0;
}
PrintMatrix(A, L"Перетворена матриця A (рядок та стовпець з min елементом
обнулені)");
return 0;
}