/*��������� ���������, ������� � ���������� ������� F(m, m), m<=10 ������� ����������� ������ � ������� � ������� ������� ���������. ������ ��������� ����� ��������� � �������. �������������� �������� ��� ���������� �������� ���� �� ������������. ������� �������� �������, ������ ��������� ����� � �� ����. ���� ��������� ������ � ������� �����������, �� ������ ��������������� ���������.*/

#include 
using namespace std;

int main(){
bool flag=false; //��� ����������, ������� ���������� ���� �� ����������
int msize=0; //������ �������
cin>>msize;
int psize=0; //������ �������, ������� ������ � ���� ������� ���������� ���������

int *matrix = new int[msize];
int *pos = new int[psize];

for(int i=0; i<msize;i++)
matrix[i] = new int[msize];

for(int i=0;i<msize;i++)
for(int j=0;j<msize;j++){
cin>>matrix[i][j]; //����������� ������� �������� �������
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
pos = new int[psize]; //����������� ������ �������, ��������� ������� �� 4(������� ������� //��������, ������� �������, ������� �������, ������� �������)
pos[psize-3]=i;
pos[psize-2]=j;
pos[psize--]=k;
pos[psize]=l;
flag=true; ///��������, ��� ���������� ��������� ����
}
}
if(!flag) cout<<"isn't two copy values"<<endl;
for(int i=0; i<msize; i++){
delete[] matrix[i];
}
delete[] pos;

return 0;
}