#include <stdio.h>
#include <malloc.h>

void main(){

int i;
int imx=0, imn=0;//������� ������������� � ������������ �������� ��������
int arrsize=0;
int *arr;

scanf("%d",&arrsize);
arr=(int*)malloc(arrsize*sizeof(int));

for(i=0;i<arrsize;i++){
    //�������������� ��� �������
    scanf("%d", &arr[i]);
}
for(i=0;i<arrsize;i++){
//����� ������� ���� � ��� ��������� �������
   if(arr[i]>arr[imx]){
        imx=i;
    }
    if(arr[i]<arr[imn]){
        imn=i;
    }
}
printf("%d", arr[imx]);
printf("%s", "--");
printf("%d", arr[imn]);
printf("%s", "----");
//������ ����� �� �������� ������ ��� ������� ����������

arr[imx]+=arr[imn];
arr[imn]=arr[imx]-arr[imn];
arr[imx]-=arr[imn];

printf("%d", arr[imx]);
printf("%s", "--");
printf("%d", arr[imn]);

free(arr);
return ;
}
