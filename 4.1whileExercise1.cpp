////while��ϰ
////��ӡ1-100֮�������ܱ�3��������
////��ӡ40-200֮�����е�ż��
////��������������ֱ������"exit"Ϊֹ
//
//
////==��һ��==
////#include<stdio.h>
////void main() {
////	int num = 1;
////	while(num<100){
////		if (num % 3 == 0) {
////			printf("%d\n", num);
////		}num++;
////	}
////}
//
//
////==�ڶ���==
////#include<stdio.h>
////void main() {
////	int num = 40;
////	while (num <= 400) {
////		if (num % 2 == 0) {
////			printf("%d\n", num);
////		}num++;//��һ��������������һ��Ҫ��ѭ����������
////	}
////}
//
////==������==
//#include<string.h>
//#include<stdio.h>
//
//void main() {
//	char name[10] = "";
//	
//	while (strcmp(name, "exit")!= 0) {
//		printf("\n����������");
//		scanf_s("%s",name);//--->!!!���ﲻ�ӵ�ַ����&����Ϊ��������ƾʹ������ĵ�ַ
//		printf("\n�������������=%s", name);
//	}
//	printf("�˳�");
//	getchar();//���˵��س�
//	getchar();
//	
//}