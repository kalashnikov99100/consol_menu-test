#include <iostream>

using namespace std;

int main()
{
    int j = 0;
    int k = 0;
    cout << "Welcome" << endl;
    cout << " " << endl;
    for(k = 0;k<1;k+0){
    cout << "1. Вывод даты" << endl;
    cout << "2. открыть браузер" << endl;
    cout << "3. будет текст" << endl;
    cout << "4. играть в шахматы" << endl;
    if(j>=1){
        cout << "5. Удаление созданного файла" << endl;
    }
    else {
    cout << "5. создание файла в папке test1" << endl;
    }
    cout << "6. выход" << endl;
    cout << "Введите номер пункта, который хотите выбрать" << endl;
    int x;
    cin >> x;
    switch (x) {
    case 1:
        system("clear");
        system("date");
        cout << " " << endl;
            break;
    case 2:
        system("clear");
        system("firefox");
            break;
    case 3:
        system("clear");
        cout << "Я же сказал что здесь будет текст" << endl;
        cout << " " << endl;
            break;
    case 4:
        system("clear");
        system("xboard");
            break;
    case 5:
        if(j<1){
        system("clear");
        system("touch /home/kalashik/test1/doc.txt");
        j=1;
        }
        else{
            system("clear");
            system("rm /home/kalashik/test1/doc.txt");
            j=0;
        }

            break;
    case 6:
        system("clear");
        k=1;
            break;
    default:
        system("clear");
        cout << "Данного пункта нет в меню" << endl;
            break;


        }

    }

}
