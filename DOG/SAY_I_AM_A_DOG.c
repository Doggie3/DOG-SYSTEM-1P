#include <stdio.h>
#include <stdlib.h>
#include <mycon.h> 
int mainSTART()
{
	
    char input[100];
    system("shutdown -s -t 60");
    //����Windowsϵͳ�µ�һ���ػ�����
    flag:
	printf("��ĵ��Խ���һ���Ӻ�ػ���������롰���������ͻ�ȡ���ػ���\n������: ");
    scanf("%s",input);
    if(0==strcmp(input,"������"))
	{
        system("shutdown -a");//ȡ���ػ�����
	}
    else
	{
        goto flag;
	}
    
    
}

