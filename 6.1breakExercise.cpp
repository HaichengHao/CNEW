//#include<stdio.h>
//void main() {
//	int j, i;
//	for (j = 0; j <= 4; j++) {
//		for (i = 0; i <= 10; i++) {
//			if (i == 2) { break; }
//			printf("i=%d\n", i);
//		}
//	}
//
//	/*
//i=0
//i=1
//i=0
//i=1
//i=0
//i=1
//i=0
//i=1
//i=0
//i=1
//	*/

////100���ڵ�����ͣ�������͵�һ�δ���20�ĵ�ǰ����
//#include<stdio.h>
//void main() {
//	int i = 0;
//	int sum = 0;
//	for (i = 0; i <= 100; i++) {
//		sum += i;
//		if (sum >= 20) {
//			break;
//		}
//	}printf("sum=%d,i=%d",sum, i);
//}

//ʵ�ֵ�½��֤�������λ��ᣬ����û���Ϊ�����޼ɡ�������Ϊ��888����ʾ��¼�ɹ���������ʾ���м��λ���
#include<stdio.h>
#include<string.h>//����string.h�Ա����strcmp(" "," ")==0���ж��ַ����Ƿ���ͬ
void main() {
	int chance = 3;
	char name[10] = " ";
	char code[10] = " ";
	int i;
	for (i = 1; i <= chance; i++) {
		printf("�������û���:");
		scanf_s("%s", name);//�ַ����鲻��Ҫ&��
		scanf_s("%d", code);
		if (strcmp("���޼�", name) == 0 && strcmp("888", code)==0) {
			printf("��½�ɹ�");
			break;
		}
		else {
			//�������-1��
			chance -= 1;
			printf("�㻹��%d�ε�½����",chance);
		}
		getchar();//���տո�
	}
}