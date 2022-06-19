////////判断一个年份是不是闰年，闰年符合下面条件的两者之一,闰年366天,平年365天,闰年二月比平年多一天
////////1.年份能被4整除，但不能被100整除，2.年份能被400整除
//////
////////思路
////////1.定义年份变量
////////2.有逻辑与和逻辑或的综合使用
////////3.if else 语句
////////第一种解法:
//////#include<stdio.h>
//////void main() {
//////	int year = 0;
//////	scanf_s("%d", &year);
//////	if (year % 400 == 0) {
//////		printf("%d是闰年", year);
//////	}
//////	else {
//////		if (year % 4 == 0 && year % 100 != 0) {
//////			printf("%d是闰年", year);
//////		}printf("%d不是闰年", year);
//////	}//注意,不能把printf("%d不是闰年", year);放到这里,因为这个不在两个条件语句内,所以它会直接输出
//////
//////}
////#include<stdio.h>
////void main() {
////	int year = 0;
////	scanf_s("%d", &year);
////	if (year % 400 == 0 && (year % 4 == 0 || year % 100 != 0)) {
////		printf("%d是闰年", year);
////	}
////	else {
////		printf("%d是平年", year);
////	}
////}
//#include<iostream>
//using namespace std;
//void main() {
//	int year = 0;
//	cout << "请输入年份\n" << endl;
//	cin >> year;
//	if (year % 400 == 0 && year % 4 == 0) {
//		cout << year << "是闰年" << endl;
//
//	}
//	else {
//		cout << year << "不是闰年,而是平年" << endl;
//	}
//}