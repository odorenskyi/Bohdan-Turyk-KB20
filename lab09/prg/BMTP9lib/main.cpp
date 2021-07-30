#include <iostream>
#include <math.h>
#include <stdio.h>
#include <string>
#include "lib9.h"
#include <bitset>
#include <climits>
#include <sstream>


using namespace std;

int tabl() {
	cout << "\nЗавдання 9.1\n";
	unsigned short score;
	cout << "\nВведiть бали: "; cin >> score;
	while (score <= 0 || score > 100) {
		score = 0;
		cout << "Введiть оцiнку вiд 1 до 100\n";
		cin >> score;
	}
	if (score <= 100 && score >= 90) {
		cout << "Оцiнка A\nExcellent perfomance with small number errors\n";
	}if (score <= 89 && score >= 82) {
		cout << "Оцiнка B\nAbove average some mistakes\n";
	}if (score <= 81 && score >= 75) {
		cout << "Оцiнка C\nOverall correct fulfillment of certain significant number of errors\n";
	}if (score <= 74 && score >= 67) {
		cout << "Оцiнка D\nNot bad, but with significant number of defects\n";
	}if (score <= 66 && score >= 60) {
		cout << "Оцiнка E\nSatisfies minimum criteria\n";
	}if (score <= 59 && score >= 35) {
		cout << "Оцiнка F\nWith the possibility of re-assembly\n";
	}if (score <= 34 && score >= 1) {
		cout << "Оцiнка FX\nWith the obligatory repeated course\n";
	}
	return 0;
}

float temp() {
	cout << "\nЗавдання 9.2\n";
	float t, t1, t2, t3, t4, t5, t6, t7, tF;
	cout << "\nВведiть температуру за понедiлок(t): "; cin >> t1;
	cout << "\nВведiть температуру за вiвторок(t): "; cin >> t2;
	cout << "\nВведiть температуру за середу(t): "; cin >> t3;
	cout << "\nВведiть температуру за четвер(t): "; cin >> t4;
	cout << "\nВведiть температуру за п'ятницю(t): "; cin >> t5;
	cout << "\nВведiть температуру за суботу(t): "; cin >> t6;
	cout << "\nВведiть температуру за недiлю(t): "; cin >> t7;
	t = (t1 + t2 + t3 + t4 + t5 + t6 + t7) / 7;
	cout << "Середня температура за шкалою Цельсiя: " << t << "\n";
	tF = 32 + ((9.0 / 5.0) * t);
	cout << "Середня температура за шкалою Фаренгейта: " << tF << "\n";
	return 0;
}


int bit() {

	cout << "\nЗавдання 9.3\n";
	int s;

	cout << "Введiть N: ";  cin >> s;

	int bit = (s >> 12) & 1;

    int num = s;
    std::cout << std::bitset<sizeof(num) * CHAR_BIT>(num) << "\n"; // вывод битового числа
	cout << "\nБiтове число D12 = " << bit << endl; // вывод 1 или 0

    unsigned int count = 0;
    for (; num; num <<= 1)
    count += num & 1;

    size_t num_zeroes = 0;
    size_t num_one = 0;
        if(bit == 0){
        for(size_t i = 0; i < CHAR_BIT * sizeof s; ++i)
            {
                if ((s & (1 << i)) == 0)
                ++num_zeroes;
            }
        cout << "Кiлькiсть нулiв: " << num_zeroes << endl;
        }else{
            for(size_t i = 0; i < CHAR_BIT * sizeof s; ++i)
            {
            if ((s >> i) % 2 == 1)
            num_one++;
            }
        cout << "Кiлькiсть одиниць: " << num_one << endl;
        }




	return 0;
}
