#include <iostream>
#include <Windows.h>
using namespace std;

int main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    
    // Задание № 1
    double R1, R2, R3;

    cout << "Enter R1: ";
    cin >> R1;
    cout << "Enter R2: ";
    cin >> R2;
    cout << "Enter R3: ";
    cin >> R3;

    double R0 = 1 / (1 / R1 + 1 / R2 + 1 / R3);
    cout << "R0 = " << R0 << "\n\n\n";

    // Задание № 2
    const double pi = 3.14;
    double R, L, N; // Площадь переименована в N, так как конфликтует с третьим заданием
    cout << "L = ";
    cin >> L;
    R = L / (2 * pi);
    N = pi * R * R;
    cout << "S = " << N << "\n\n\n";
    

    // Задание № 3
    double V, T, A;
    cout << "V = ";
    cin >> V;
    cout << "T = ";
    cin >> T;
    cout << "A = ";
    cin >> A;
    double S = V * T + (A * T * T) / 2;
    cout << "S = " << S << "\n";


}

