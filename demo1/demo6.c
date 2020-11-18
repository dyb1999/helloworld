#include <stdio.h>
#include <stdlib.h>


typedef struct snake
{
	char body;
	struct snake *next;
}snake, *Snake;

snake *createSnake(int num)
{
	snake *head = NULL;
	snake *end = NULL;
	snake *nextone = NULL;
	int count = 1;

	head = end = (snake*)malloc(sizeof(snake));
	head->body = '*';
	head->next = end;
	end->next = NULL;

	for (int i = 1; i < num; i++)
	{
		nextone = (snake*)malloc(sizeof(snake));
		nextone->body = '*';
		nextone->next = NULL;
		end->next = nextone;
		end = nextone;
	}

	return head;
}

void printfAllNode(snake *node)
{
	while (node->next != NULL)
	{
		printf("%s",node->body);
		node = node->next;
	}
}

void main()
{
	int num;
	snake * node;
	printf("请输入需要打印的节点个数：\n");
	scanf("%d",&num);
	node = createSnake(num);
	printfAllNode(node);

}