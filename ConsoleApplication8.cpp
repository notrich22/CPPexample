#include <iostream>
using namespace std;
void m() {
    const int s = 5;
    int nums[s] = { 0 };
    int k = 0;
    for (int i = 0; i < s; i++) {
        cout << "Enter nums[" << i << "]: ";
        cin >> nums[i];
    }
    for (int i = 0; i < s - 1; i++) {
        if (nums[i+1] == nums[i]+1) {
            if (i == 3) {
                k = 1;
                cout << "Function increases!" << endl;
            }
            continue;
        }
        else
            break;
    }
    for (int i = 0; i < s - 1; i++) {
        if (nums[i+1] == nums[i]-1) {
            if (i == 3) {
                k = 1;
                cout << "Function decreases!" << endl;
            }
            continue;
        }
        else
            break;
    }
    if (k == 0) {
        cout << "nothing is here!" << endl;
    }
    
}
int main()
{
    m();
    const int s = 5;
    int nums[s] = { 0 };
    int runningSum[s] = { 0 };
    int sum = 0;
    for (int i = 0; i < s; i++) {
        cout << "Enter nums[" << i << "]: ";
        cin >> nums[i];
    }
    for (int i = 0; i < s; i++) {
        sum += nums[i];
        runningSum[i] = sum;
        cout << runningSum[i] << endl;
    }
}

// Запуск программы: CTRL+F5 или меню "Отладка" > "Запуск без отладки"
// Отладка программы: F5 или меню "Отладка" > "Запустить отладку"

// Советы по началу работы 
//   1. В окне обозревателя решений можно добавлять файлы и управлять ими.
//   2. В окне Team Explorer можно подключиться к системе управления версиями.
//   3. В окне "Выходные данные" можно просматривать выходные данные сборки и другие сообщения.
//   4. В окне "Список ошибок" можно просматривать ошибки.
//   5. Последовательно выберите пункты меню "Проект" > "Добавить новый элемент", чтобы создать файлы кода, или "Проект" > "Добавить существующий элемент", чтобы добавить в проект существующие файлы кода.
//   6. Чтобы снова открыть этот проект позже, выберите пункты меню "Файл" > "Открыть" > "Проект" и выберите SLN-файл.
