#include<stdio.h>
main()
{
	int i,k,p,m=0;
	for(i=2;i<=100;i++){
		p=1; //��p���жϵ�ǰ���Ƿ������� ��p=1������,p=0��������
		for(k=2;k<i;k++){
			if(i%k==0){
				p=0;
				break;
			}
		}
		if(p==1){
			if(m!=0){
				printf("��"); 
			}
			printf("%d",i); 
			m++; 
		}
	}
 } 
