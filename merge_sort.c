#include <stdio.h>

//입력:  8
//     37,10,22,30,35,13,25,24
//출력: 10,13,22,24,25,30,35,37

void merge_sort(int list[], int left, int right){
    int mid;
     if(left < right){
         mid = (left+right) / 2;
         merge_sort(list, left, mid);
         merge_sort(list, mid+1, right);
         //merge(list,left,mid,right);
     }
}

int main(){
    int input_list[100100];
    int size , i=0;
    scanf("%d\n",&size);
    scanf_s("%[^\n]s",input_list, size);

    printf("%d\n", size);
    while(i<size){
        printf("%d ", input_list[i]);
        i++;
    }
}