//
// Created by Taras Neridnyi on 02.11.2024.
//
#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;



void create(int* &a, const int n, const int Low, const int High)
{
    a = new int[n];
    for (int i=0; i<n; i++)
        a[i] = Low + rand() % (High-Low+1);
}

void print(int* a, const int size) {
    for (int i=0; i<size; i++)
        cout << setw(4) << a[i] << " ";
}

int findDobutok(int* a, const int n) {
    int dobutok = 1;
    bool atLeastOne = false;
    for (int i = 0; i < n; i++) {
        if (i % 2 == 0) {
            dobutok *= a[i];
            atLeastOne = true;
        }
    }
    return atLeastOne && dobutok != 0 ? dobutok : 0;
}
int findSumBetweenTwoZeroes(int* a, const int n) {
    int first = -1, last = -1;

    for (int i = 0; i < n; i++) {
        if (a[i] == 0) {
            if (first == -1) {
                first = i;
            }
            last = i;
        }
    }

    if (first == -1 || last == -1 || first >= last) {
        return 0;
    }

    int sum = 0;
    for (int i = first + 1; i < last; i++) {
        sum += a[i];
    }
    return sum;
}

void separatePositiveNegative(int* a, const int n) {
    int* arr = new int[n];
    int k = 0;
    for (int i = 0; i < n; i++) {
        if (a[i] >= 0) {
            arr[k++] = a[i];
        }
    }
    for (int i = 0; i < n; i++) {
        if (a[i] < 0) {
            arr[k++] = a[i];
        }
    }
    for (int i = 0; i < n; i++) {
        a[i] = arr[i];
    }
    delete[] arr;
}