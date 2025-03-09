#include<stdio.h>
#include<stdlib.h>
# define NUM 10
typedef struct ListLink
{
	int data;
	struct ListLink* next;
}ListLink;
ListLink* CreatLink(int y)
{

	ListLink* PStack = (ListLink*)malloc(sizeof(ListLink));
	if (PStack == NULL)
	{
		printf("error");
		return NULL;
	}
	PStack->data = y;
	PStack->next = NULL;
	return PStack;
}

int PushList(ListLink* PStack, int n)
{
	ListLink* newnode = (ListLink*)malloc(sizeof(ListLink));
	if (newnode == NULL)
	{
		printf("error");
		return NULL;

	}
	newnode->data = n;
	newnode->next = PStack;
	PStack = newnode;
	return 0;
}
int  TopValues(ListLink* PStack)
{
	if (PStack == NULL)
	{
		printf("error");
		return -1;
	}
	return PStack->data;
}
int PopElements(ListLink* PStack)
{
	if (PStack == NULL)
	{
		printf("error");
		return -1;
	}
	ListLink* p = PStack;
	PStack = PStack->next;
	free(p);
	return 0;
}
int minelements(ListLink* PStack)
{
	int min = PStack->data;
	if (PStack == NULL)
	{
		printf("error");
		return -1;
	}
	while(PStack!=NULL)
	{ 
		if (PStack->data < min)
		{
			min =PStack->data;
		}
		PStack = PStack->next;
	}
	return min;

}
int main()
{

	int n[NUM], i, num;
	ListLink* PStack = NULL;

	printf("请输入");
	for (i = 0; i < NUM; i++)
	{
		scanf("%d", &n[i]);
		ListLink* PStack = CreatLink(n[i]);

	}
	scanf("%d", num);
	switch(num)
	{
		int n;
	case1:printf("压入");
		 scanf("%d", &n);
		 pushList(PStack, n);
		break;
	case2:printf("弹出");
		PopElements(PStack);
		break;
	case3:printf("获取栈顶元素"); 
		n=TopValues(PStack);
		printf("%d", &n);
		break;

	case4:printf("获取最小元素"); 
		n = minelements(PStack);
		printf("%d", &n);
		break;

	default:printf("error"); break;

	}
	return 0;

}

























int main()
{




}