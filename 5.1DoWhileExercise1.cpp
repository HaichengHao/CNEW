////��ӡ1-100
////����1-100�ĺ�
////����1-200֮���ܱ�5���������ܱ�����������
////����Ϲ�ͬ�����Ź�������Ž�һֱ���ֱ���Ϲ�˵��ͬ��Ϊֹ
//
////==1==
////#include<stdio.h>
////void main() {
////	int i = 1;
////	do {
////		printf("i=%d\n", i);
////		i++;
////	} while (i <= 100);
////}
//
////==2==
////#include<stdio.h>
////void main() {
////	int i = 1;
////	int sum = 0;
////	do {
////		sum += i;
////		i++;
////
////	} while (i <= 100);
////	printf("sum = % d", sum);
////}
//
////==3==
////#include<stdio.h>
////void main() {
////	int i = 1;
////	int max = 200;
////	int count = 0;
////	do {
////		if (i % 5 == 0 && i % 3 != 0) {
////			printf("i=%d\n", i);
////			count++;
////		}i++;
////	} while (i<=max);
////	printf("1-200֮���ܱ�5���������ܱ�������������%d��", count);
////}
//
////==4==
//#include<stdio.h>
//void main() {
//	char answer = ' ';
//	do {
//		printf("�����ʣ��ҿ��Թ���ô��y/n");
//		scanf_s("%c", &answer);//��ȡ�û�����
//		getchar();//���˻س���
//	} while (answer == 'y');
//	printf("����ֹͣ����");
//}