//////#include<stdio.h>
//////void main() {
//////	printf("������һ������:");
//////	int num = 0;
//////	scanf_s("%d", &num);
//////	int num1 = num / 100;
//////	int num2 = num % 100 / 10;
//////	int num3 = num % 10;
//////	if (num == num1 * num1 * num1 + num2 * num2 * num2 + num3 * num3 * num3) {
//////		printf("%d����ˮ�ɻ���", num);
//////	}
//////	else {
//////		printf("%d����ˮ�ɻ���", num);
//////	}
//////	getchar();
//////}
////
//////��д���򣬸���������·ݺ���ݣ�������µ�����
//////#include<stdio.h>
//////void main() {
//////	printf("���������:\n");
//////	int year = 0;
//////	scanf_s("%d", &year);
//////	printf("�������·�:\n");
//////	int month = 0;
//////	scanf_s("%d", &month);
//////	//printf("���������:");
//////	//int month = 0;
//////	//scanf_s("%d", &month);
//////	if (year % 4 == 0 && year % 100 != 0 || year % 400 == 0) {
//////	/*	printf("�������·�%d");
//////		int  month =0;
//////		scanf_s("%d", &month);*/
//////		if (month == 1 || month == 3 || month == 7 || month == 8 ||month==10|| month == 12) {
//////			printf("%d��%d����31��",year,month);
//////		}
//////		else if (month == 2) {
//////			printf("%d��2����29��", year);
//////		}
//////		else {
//////			printf("%d��%d����30��", year, month);
//////		}
//////	}
//////	else {
//////		/*int month = 0;
//////		scanf_s("%d", month);*/
//////		if (month == 1 || month == 3 || month == 7 || month == 8 ||month==10|| month == 12) {
//////			printf("%d��%d����31��", year, month);
//////		}
//////		else if (month == 2) {
//////			printf("%d��2����28��", year);
//////		}
//////		else {
//////			printf("%d��%d����30��", year, month);
//////		}
//////	}
//////}
////
//////==�򵥷���==
//////����switch�Ĵ�͸
////#include<stdio.h>
////void main() {
////	int year = 0;
////	int month = 0;
////	printf("���������:");
////	scanf_s("%d", &year);
////	printf("�������·�:");
////	scanf_s("%d", &month);
////	switch (month) {
////	case 1:
////	case 3:
////	case 5:
////	case 7:
////	case 8:
////	case 10:
////	case 12:
////		printf("%d���%d����31��", year, month);
////		break;
////	case 2:
////		if (year % 4 == 0 && year % 100 != 0 || year % 400 == 0) {
////			printf("%d���2����29��",year);
////		}
////		else {
////			printf("%d���2����28��",year);
////		}break;
////	default:
////		printf("%d���%d����30��",year);
////		break;//���п���
////	}
////}
//
////���Сд��a-z�Լ���д��Z-A
////#include<stdio.h>
////void main() {
////	char c1,c2;
////	for (c1 = 'a'; c1 <= 'z'; c1++) {
////		printf("%c\n", c1);
////	}
////	printf("==========\n");
////	for (c2 = 'Z'; c2 >= 'A'; c2--) {
////		printf("%c\n", c2);
////	}
////}
//// 
//// 
//// ==��1+1/2-1/3+1/4+..+1/100
////#include<stdio.h>
////void main() {
////	int i;
////	double sum = 0.0;
////	for (i = 1; i <= 100; i++) {
////		if (i % 2 == 0) {
////			sum += 1.0/i;
////		}
////		else {
////			sum -= 1.0/i;
////		}
////	}
////	printf("sum=%.2f", sum);
////}
//
////���100-9999�����������
//#include<stdio.h>
//void main() {
//	printf("100-9999�����������������ʾ:\n");
//	int i;
//	for (i = 100; i <= 999; i++) {
//		if (i % 400 == 0 || i % 4 == 0 && i % 100 != 0) {
//		printf("%d\n", i);
//		}
//	}
//}