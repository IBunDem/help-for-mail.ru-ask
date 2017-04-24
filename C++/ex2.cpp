//задание:
//Определить время окончания рабочего дня (в часах и минутах),
//если известны время его начала (в часах и минутах) и продолжительность (вместе с обедом) (в часах и минутах).

//Краткое описание:
//Получаешь время начала, потом получаешь время окончания через ввод. Потом получаешь через сложение часов и минут
//конечное время. Учитывая, что в часе 60 минут.

#include <iostream>
using namespace std;

int main(){
 setlocale(LC_CTYPE, "rus"); // отображение кириллицы в консоли

 float starthour, endhour, workhours, startminute, endminute, workminutes;

 cout << "Введите час начала работы: ";
 cin >> starthour;
 cout << "Введите минуту начала работы: ";
 cin >> startminute;
 cout << "Введите количество часов работы: ";
 cin >> workhours;
 cout << "Введите количество минут работы: ";
 cin >> workminutes;

 endhour = starthour + workhours;
 endminute = startminute + workminutes;

 while(endminute > 60) {
 if(endminute > 60) {
 endminute -= 60;
 endhour++;
 }
 else break;
 }
 if(endhour>23) {
 endhour -= 23;
 }
 cout<<"Время окончания работы: " << endhour << " часов, " << endminute << " минут. " <<endl;
 return 0;
}
