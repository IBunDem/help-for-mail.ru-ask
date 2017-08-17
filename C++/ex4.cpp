/*в школе 2 выпускных класса по 25 учеников, все они сдавали егэ по информатике. Результаты экзамена для каждого ученика занесены в таблицу (числа вводятся с клавиатуры). Для каждого класса найти средний балл и минимальный балл. На печать выдать результаты и таблицу.*/
#include <iostream>
#include <stdio.h>
using namespace std;

#define CLASSES_COUNT 2
#define STUDENTS_COUNT 25

void find_min(int *arr, int classNo){
  int minimal = 0, abs = 0, sum = 0;
  minimal = arr[0];
  int arr_size = STUDENTS_COUNT;
  for(int i=0; i<arr_size; i++){
    if(minimal > arr[i]){
      minimal = arr[i];
    }
    sum += arr[i];
  }
  abs = sum/arr_size;
  printf("Минимальный балл в классе %d = %d\nСредний балл в классе %d = %d\n", classNo, minimal, classNo, abs);
}

int main() {
  setlocale(LC_CTYPE, "rus");
  int students[CLASSES_COUNT][STUDENTS_COUNT];

  for(int i=0; i<CLASSES_COUNT; i++){
    for(int j=0; j<STUDENTS_COUNT; j++){
      printf("Введите оценку для %d-го ученика %d-го класса\n", j+1, i+1);
      cin>>students[i][j];
    }
    cout<<"-_-_-_-_-_-\n";
  }

  find_min(students[0], 1);
  find_min(students[1], 2);
}
