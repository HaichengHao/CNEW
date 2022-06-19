////#include<stdio.h>
////#include<math.h>
////void main() {
////	/*求2ax + bx + c = 0方程的根。a, b, c分别为函数的参数，
////	如果b^2-4ac>0,则有两个解，b^2-4c=0,则有一个解；若b^2-4ac<0,
////	则无解
////	提示1：
////	x1 = (-b+sqrt(b^2-4ac))/2a
////	x2 = (-b-sqrt(b^2-4ac))/2a
////	提示2：
////	sqrt(num),对num开方，需要#include<math.h>
////	*/
////
////	//分析
////	// 1. 定义变量
////	// 2. b^2-4ac多次出现，因此可以用一个变量来保存，避免重复计算造成冗余
////	// 3使用多分支
////	//
////	double a = 3, b = 2, c = 6, x1 = 0, x2 = 0;
////	//printf("输入ax+bx+c=0中a,b,c的值");
////	//scanf_s("a=%f", &a);
////	//scanf_s("b=%f", &b);
////	//scanf_s("c=%f", &c);
////	double t = b * b - 4 * a * c;//pow(x,n)指的是x的n次方
////	if (t > 0) {
////		x1 = (-b + sqrt(t)) / (2 * a);
////		x2 = (-b - sqrt(t)) / (2 * a);
////		printf("有两个根，分别为x1=%f,x2=%f", x1, x2);
////	}
////	else if (t == 0) {
////
////		x1 = (-b + sqrt(t)) / (2 * a);
////
////	}
////	else {
////		printf("无解");
////	}
////
////
////}
//#include<iostream>
//#include<math.h>
//
//using namespace std;
//void main() {
//	double a = 0.0;
//	double  b = 0.0;
//	double c = 0.0;
//	double justice = b*b - 4 * a * c ;
//	double t = sqrt(b*b - 4 * a * c);
//	cout << "请输入ax+bx+c对应的a,b,c的值\n" << endl;
//	cin >> a;
//	cin >> b;
//	cin >> c;
//	if (justice > 0) {
//		cout << "两个解" << endl;
//		double answer1 = (-b + t) / 2 * a;
//		double answer2 = (-b + t) / 2 * a;
//		cout << "\n第一个解" << answer1 << endl;
//		cout << "\n第二个解" << answer2 << endl;
//	}else if(justice == 0) {
//		cout << "一个解" << endl;
//	double answer = (-b + t) / 2 * a;
//		cout << "\n一个解：" <<answer<< endl;
//	}
//	else {
//		cout << "无解" << endl;
//	}
//}