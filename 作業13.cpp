#include<stdio.h>
#include<stdlib.h>

int main(void)
{
	char sex;
	int age;

	printf("�п�J�ʧO\n�O�k�ͽп�JB,�k�ͽп�JG:\n");
	scanf("%c",&sex);
	printf("�п�J�~��:\n");
	scanf("%d",&age);
	
	
	if(sex=='b'||sex=='B')
	{ 
		if(age>=18)
			printf("�i�H���B\n");
		else
			printf("���i���B\n");
	} 
	else if(sex=='G'||sex=='g')
	{
		if(age>=16)
			printf("�i�H���B\n");
		else
			printf("���i���B\n");
	}
	
	system("pause");
	return 0;
}
