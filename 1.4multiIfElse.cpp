//#include<stdio.h>
//#include<math.h>
//void main() {
//	/*��2ax + bx + c = 0���̵ĸ���a, b, c�ֱ�Ϊ�����Ĳ�����
//	���b^2-4ac>0,���������⣬b^2-4c=0,����һ���⣻��b^2-4ac<0,
//	���޽�
//	��ʾ1��
//	x1 = (-b+sqrt(b^2-4ac))/2a
//	x2 = (-b-sqrt(b^2-4ac))/2a
//	��ʾ2��
//	sqrt(num),��num��������Ҫ#include<math.h>
//	*/
//
//	//����
//	// 1. �������
//	// 2. b^2-4ac��γ��֣���˿�����һ�����������棬�����ظ������������
//	// 3ʹ�ö��֧
//	//
//	double a = 3, b = 2, c = 6, x1 = 0, x2 = 0;
//	//printf("����ax+bx+c=0��a,b,c��ֵ");
//	//scanf_s("a=%f", &a);
//	//scanf_s("b=%f", &b);
//	//scanf_s("c=%f", &c);
//	double t = b * b - 4 * a * c;//pow(x,n)ָ����x��n�η�
//	if (t > 0) {
//		x1 = (-b + sqrt(t)) / (2 * a);
//		x2 = (-b - sqrt(t)) / (2 * a);
//		printf("�����������ֱ�Ϊx1=%f,x2=%f", x1, x2);
//	}
//	else if (t == 0) {
//
//		x1 = (-b + sqrt(t)) / (2 * a);
//
//	}
//	else {
//		printf("�޽�");
//	}
//
//
//}