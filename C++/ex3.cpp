//Задание:
//Вывести количество нулей в конце факториала числа введенного пользователемъ

#include <iostream>
using namespace std;

int main(){
  setlocale(0,"");
  int n=1, factorial=1, count =0;

  cout<<"Введите число: "<<endl;
  cin>>n;

  for(int i=1; i<=n; i++){
    factorial*=i;
  }
  cout<<factorial<<endl;

  if(factorial%10 == 0){
    while(factorial%10 ==0){
      count++;
      factorial/=10;
    }
  }
  else cout<<"В конце нет нолей!" <<endl;
  cout<<count<<endl;

  return 0;
}
