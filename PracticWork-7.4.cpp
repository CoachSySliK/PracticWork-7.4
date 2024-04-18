#include <iostream>

using namespace std;

int main()
{
    int roomSize[2];
    do {
        cout << "Задайте размер комнаты: ";
        cin >> roomSize[0] >> roomSize[1];
        cin.ignore(100, '\n'); 
        if (roomSize[0] < 1 || roomSize[1] < 1) {
            cout << "Укажите положительные значения!!!\n";
        }
    } while (roomSize[0] < 1 || roomSize[1] < 1);
    
    for (int i = 1; i <= roomSize[1]; i++) {
        for (int k = 1; k <= roomSize[0]; k++) {
            if (i == 1 && k == 1 || i == 1 && k == roomSize[0] || i == roomSize[1] && k == roomSize[0] || i == roomSize[1] && k == 1) {
                cout << "0";
            }
            else if (i == 1 || i == roomSize[1]) {
                cout << "-";
            }
            else if (k == 1 || k == roomSize[0]) {
                cout << "|";
            }
            else {
                cout << " ";
            }
        }
        cout << "\n";
    }
}