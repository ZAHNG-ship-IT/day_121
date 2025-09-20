#define InitSize 100
#include <stdio.h>
#include <malloc.h>
typedef struct 
{
  int *data;
  int MaxSize,length;  
}SeqList;

//线性表要玩成的基本操作


void InitList(SeqList *L);//初始化
int length(int );//求表长
void LocateElem(L,e);//按值查找
GetElem(L,i);//按位查找
ListInsert(L,i,e);//插入操作
ListDelete(L,i,e);//插入操作
Print(L);//遍历操作
empty(L);//判空操作
DestoryList(l);//销毁操作，释放空间



int main()
{
    printf("hello");
}



void InitList(SeqList *L)
{
    L->data = (int *)malloc(InitSize * sizeof(int));
    L->length = 0;
    L->MaxSize = InitSize;

}