////#include<stdio.h>
////void main() {
////	//�Ӽ��̶��������ȷ�������������ж϶���������͸����ĸ�����
////	//����Ϊ0ʱ��������ʹ��forѭ����break��continue��ɣ���positive������negative������
////	//�������postive���������ĸ���
////	//�������negative���渺���ĸ���
////	//ʹ��break+while+contiue
////	int postive = 0;
////	int negative = 0;
////	int num = 0;//�����������
////	for (;;) {//��ѭ������Զ�����˳�����������ѭ��
////		printf("��������:");
////		scanf_s("%d", &num);
////			if (num == 0) {//���num=0,����ѭ��
////				break;
////			}if (num < 0) {//���num<0,
////				negative++;//�����ĸ���+1
////				continue;//������ǰѭ��
////			}
////			postive++;//�����ĸ���+1
//		/*	else if (num > 0) {
//				postive++;
//	//		}*/
//	//	}
//	//printf("postive=%d,negative=%d", postive, negative);
//	//}
//
//
////==demo3==
////�ж�һ����100000���˹�·�ڣ���50000���ϵ�Ǯ��ʱ��ÿ��һ��·�ڽ�5%��Ǯ������ÿ��һ��·�ڽ�1000
//#include<stdio.h>
//void main() {
//	int count = 0;
//	float fee = 100000.0;
//	while (1) {//��ѭ����һ�㲻��
//		//�ж��Ƿ���˳�
//		if (fee < 1000) {
//			break;//С��1000��Ǯֱ���˳�ѭ��
//		}
//		if (fee > 50000.0) {
//			fee = fee * 0.95;
//			count += 1;
//		}
//		else if(fee<=50000) {
//			fee -= 1000;
//			count += 1;
//		}
//		
//	}printf("100000��Ǯ���Ծ���%d��·��\n��ʣ��%.2f��Ǯ", count,fee);
//
//}