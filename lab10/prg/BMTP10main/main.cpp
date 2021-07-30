#include <iostream>
#include <fstream>
#include <string>
#include <locale>
#include <windows.h>
#include <regex>
#include <time.h>
#include "lib82.h"
#include <bitset>

using namespace std;

int main()
{
    ifstream f1("BMTP10.txt");//переменная f1 отвечает за запись в файл
	ofstream f2;        //переменная f2 отвечает за чтение файла

    setlocale(LC_ALL, "");
    f2.open("BMTP10.txt"); // окрываем файл для записи
    if (f2.is_open()) // создание файла
    {
        f2 << "Турик Б.Є., студент ЦНТУ, Пантаївка, Україна, 2021" << std::endl;// разработчик
    }
    f2.close();

    SetConsoleCP(1251);
      SetConsoleOutputCP(1251); // формат вывода в файл

      cout << "Введiть довiльний текст" << endl;

    char text[255];
    cin.getline(text, 255); // Запись строки

    string change = text;

    change = regex_replace(change, regex("к"), "?");
    change = regex_replace(change, regex("т"), "?");
    change = regex_replace(change, regex("У"), "?");
    change = regex_replace(change, regex("л"), "?");
    change = regex_replace(change, regex("Й"), "?"); // Замена на ?

    cout << change << endl; // для консоли

    string change1 = regex_replace(change, regex(" "), ""); // удаление пробела

    //cout << change1 << endl; // перевірка в консолі
    int numbs = change1.size(); // Кількість символів
    cout << "Кількість літер: " << numbs << endl;
    int vubor = numbs % 2; // перевірка на парність


    string text1 = "В хаті сонячній промінь косо\nНа долівку ляга з вікна...\nТвої чорні шовкові коси\nПрипорошила вже сивина.";
    string text2 = "Коли малим ти вперше став на ноги -\nЯка ж то радість матері була!\nВід тихої колиски до порога\nВона тебе за руку провела.";

    ofstream out("BMTP10.txt", std::ios::app); // дозапись в файл
if (out.is_open())
{
   out << text << endl; // вывод ручного ввода
   out << change << endl; // символи заменені на ?
   if(vubor < 1){
        cout << "Кількість символів парна" << endl;
        out << text1 << endl;
    }else{
        cout << "Кількість символів не парна" << endl;
        out << text2 << endl;
    }

    string change2 = text;

    for (size_t i = 0; i<change2.size(); i+=2)
       out << change2[i];
       out << endl;

   time_t t = time(NULL);
    struct tm* T = localtime(&t);
    printf("Текущая дата: %d.%02d.%04d\n", T->tm_mday, T->tm_mon, 1900 + T->tm_year);
    out<<asctime(T)<<endl;

    int b;
    cout << "Введiть b: ";
    cin >> b;
    out << "S = " << s_calculation() << endl;
    out << "b = " << bitset<8>(b)  << endl;
}
out.close();

    return 0;
}
