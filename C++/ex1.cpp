/*Составить программу, которая в квадратной матрице F(m, m), m<=10 находит одноименные строки и столбцы с равными суммами элементов. Номера найденных строк запомнить в массиве. Дополнительных массивов для сохранения значений сумм не использовать. Вывести исходную матрицу, номера найденных строк и их сумм. Если требуемые строки и столбцы отсутствуют, то выдать соответствующее сообщение.*/

#include 
using namespace std;

int main(){
bool flag=false; //бул переменная, которая определяет были ли совпадения
int msize=0; //размер матрицы
cin>>msize;
int psize=0; //размер массива, который хранит в себе позиции одинаковых элементов

int *matrix = new int[msize];
int *pos = new int[psize];

for(int i=0; i<msize;i++)
matrix[i] = new int[msize];

for(int i=0;i<msize;i++)
for(int j=0;j<msize;j++){
cin>>matrix[i][j]; //присваиваем вручную значения матрицы
}
for(int i=0;i<msize;i++)
for(int j=0;j<msize;j++)
for(int k=0;k<msize;k++)
for(int l=0;l<msize;l++){
if(matrix[i][j]==matrix[k][l]){
/*
psize+=2;
pos = new int[psize];
pos[psize--]=matrix[i][j];
pos[psize]=matrix[k][l];
*/
psize+=4;
pos = new int[psize]; //увеличиваем размер массива, хранящего позиции на 4(столбец первого //элемента, колонка первого, столбец второго, колонка второго)
pos[psize-3]=i;
pos[psize-2]=j;
pos[psize--]=k;
pos[psize]=l;
flag=true; ///помечаем, что совпадения элементов были
}
}
if(!flag) cout<<"isn't two copy values"<<endl;
for(int i=0; i<msize; i++){
delete[] matrix[i];
}
delete[] pos;

return 0;
}