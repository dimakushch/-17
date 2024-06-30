#include <iostream>
#include <Windows.h>
#include<fstream>
#include<string>
#include<vector>

using namespace std;

//typedef struct {
//    string tel;
//    string pris;
//}People;

int main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    //1
    /*ofstream file("abonent.txt");
    if (!file) {
        cout << "Файл не знайдено!" << endl;
        return 1;
    }
    People mas[10];
    int index = 0;
    int yes;
    do {
        cout << "Введіть прізвище на номер " << index + 1 << " абонента: ";
        cin >> mas[index].pris >> mas[index].tel;
        file << index + 1 << ") " << mas[index].pris<< ": " << mas[index].tel << endl;
        cout << "Хочете ще додати? (1-так 2-ні) ";
        cin >> yes;
        index++;
    } while (yes == 1);
    cout << "Всі абоненти збережені! ";

    int choice;
    cout << "Вивести на єкран: " << endl;
    cout << "1) Список прізвищ абонентів та їх телефонів"<<endl;
    cout << "2) Лише прізвище та номер телефону необхідного абонента"<<endl;
    cout << "3) Вихід"<<endl;
    cout << "Ваш вибір: ";
    cin >> choice;
   
    if (choice == 1) {
        ifstream file("abonent.txt");
        int count;
        file >> count;
        for (int i = 0; i < index; ++i) {
            cout << i + 1 << ") " << mas[i].pris <<" " << mas[i].tel << endl;
            
        }
        file.close();
    }
    else if (choice == 2) {
        cout << "Введіть номер в списку конкретного абонента: ";
        int num;
        cin >> num;
        ifstream file("abonent.txt");
        cout << num << ") " << mas[num-1].pris <<" " << mas[num - 1].tel;
        
        file.close();
    }*/

    //2

    /*ifstream file("list.txt");
    if (!file) {
        cout << "Файл не знайдено!" << endl;
        return 1;
    }

    ofstream file1("text.txt");
    if (!file) {
        cout << "Файл не знайдено!" << endl;
        return 1;
    }
    string list;
    while (getline(file, list)) {
        file1 << list << endl;
    }
    file.close();
    file1.close();*/

    //3

    /*ifstream file("list.txt");
    if (!file) {
        cout << "Файл не знайдено!" << endl;
        return 1;
    }

    ofstream file1("text.txt");
    if (!file) {
        cout << "Файл не знайдено!" << endl;
        return 1;
    }
    vector<string> lists;
    string list;
    while (getline(file, list)) {
        lists.push_back(list);
    }

    for (int i = lists.size() - 1; i >= 0; --i) {
        file1 << lists[i] << endl;
    }

    file.close();
    file1.close();*/

    //4

    ifstream file("list.txt");
    if (!file) {
        cout << "Файл не знайдено!" << endl;
        return 1;
    }

    ofstream file1("text.txt");
    if (!file) {
        cout << "Файл не знайдено!" << endl;
        return 1;
    }

    vector<string> lists;
    string list;
    int line = -1;
    while (getline(file, list)) {
        lists.push_back(list);

        bool prob = false;
        for (char i : list) {
            if (i == ' ') {
                prob = true;
                break;
            }
        }
        if (!prob) {
            line = lists.size() - 1;
        }
    }
    if (line != -1) {
        lists.insert(lists.begin() + line + 1, "------------");
    }
    else {
        lists.push_back("------------");
    }
    for (const auto& i : lists) {
        file1 << i << endl;
    }
    


}

