#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <iostream>
#include <time.h>
#include <string.h>
#include <stdlib.h>

void printArray(int array[], int size)
{
    srand(time(NULL));
    for (int i = 0; i < size; i++)
    {
        array[i] = 1 + rand() % 19;
        printf("%3d" , array[i]);
    }
}

int main()
{
    setlocale(LC_ALL, "Russian");

    printf("Задание\n\nОбъявить два целочисленных массива с разными размерами и написать функцию, которая заполняет их элементы значениями и выводит на экран.\n\nФункция должна принимать два параметра – массив и его размер.\n\n");

    int arr1[10];
    int arr2[8];
    int s1 = 10;
    int s2 = 8;

    printArray(arr1, s1);
    printf("\n\n");
    printArray(arr2, s2);
}
