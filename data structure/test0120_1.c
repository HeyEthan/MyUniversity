/*
#define MaxSize 10//������󳤶�
typedef struct {
	ElemType data[MaxSize];//�þ�̬�ġ����顱�������Ԫ��
	int length;//˳����ĵ�ǰ����
}SqList;//˳��������Ͷ��壨��̬���䷽ʽ��
*/
#include<stdio.h>
#define MaxSize 10
typedef struct {
	int data[MaxSize];
	int length;
}SqList;

//��ʼ��һ��˳���
void InitList(SqList* L) {
	/**/
	for (int i = 0; i < MaxSize; i++)
		L->data[i] = 0;//Ϊ���е�����Ԫ������Ĭ�ϳ�ʼֵ
	L->length = 0;//˳�����ʼ������Ϊ0
}
int main() {
	SqList L;//����һ��˳���
	InitList(&L);
	return 0;
}