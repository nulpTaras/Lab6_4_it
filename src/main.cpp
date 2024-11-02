#include <iostream>
#include "functions.cpp"
#include <ctime>
using namespace std;

int main()
{
    srand(unsigned(time(NULL)));
    int n, *t, low ,high;

    cout << "n : "; cin >> n;
    create(t, n , low=-5, high=6);
    cout << "\nпочатковий масив:";
    print(t , n);
    cout << endl;

    cout << "добуток парних елементів: " << findDobutok(t , n) << endl;
    cout <<"сума елементів розташована між нулями : " << findSumBetweenTwoZeroes(t , n) << endl;
    cout << "додатні,відємні: "; separatePositiveNegative(t,n); print (t , n);

    delete[] t;
    return 0;
}


