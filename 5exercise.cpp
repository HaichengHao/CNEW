//#include<stdio.h>
//void main() {
//	//定义一个变量保存秒数，打印输出xx小时xx分钟xx秒
//	//思路
//	//1.定义变量保存秒数second
//	//2.定义变量保存小时hour
//	//3.定义变量保存分钟minut
//	//4.定义变量保存剩余秒数leftSecond
//	//int second = 894567;
//	//int hour = second / 3600;//秒数/3600得到小时数 1hour = 3600second
//	//int min = second % 3600 / 60;//秒数出去小时数后剩下的秒数除60得到分钟数 1 minute=60s
//	//int leftSecond = second % 60;//秒数模60，余数为不够60s的剩余秒数
//	//printf("%d秒合%d小时%d分%d秒",second,hour,min,leftSecond);
//     //894567秒合248小时29分27秒
//
//
//	//实现对三个整数进行排序，输出时按照从小到达排序
//	int n1 = 10;
//	int n2 = 8;
//	int n3 = 5;
//	//思路如下
//	//1.从小到大，将值保存到n1,n2,n3
//	//2.先让n1和n2比较，如果n1大于n2,则交换
//	//3.n2和n3比较，如果n2大于n3，则交换，
//	//4.n1和n2比较，如果n1大于n2,则交换。
//	
//	
//	//先输出一遍原始数据，以便观察
//	printf("n1=%d,n2=%d,n3=%d",n1, n2, n3);
//	//1.从小到大，将值保存到n1,n2,n3
//	//2.先让n1和n2比较，如果n1大于n2,则交换
//	int temp = 0;//用于交换的临时变量
//	if (n1 > n2) {
//		temp = n1;
//		n1 = n2;
//		n2 = temp;
//
//	}
//	printf("\n第一次处理后n1=%d,n2=%d,n3=%d", n1, n2, n3);
//	//第一次处理后n1=8,n2=10,n3=5
//
//	//3.n2和n3比较，如果n2大于n3，则交换，
//	if (n2 > n3) {
//		temp = n2;
//		n2 = n3;
//		n3 = temp;
//	}
//	printf("\n第二次处理后n1=%d,n2=%d,n3=%d", n1, n2, n3);
//	//第二次处理后n1=8,n2=5,n3=10
//	if (n1 > n2) {
//		temp = n1;
//		n1 = n2;
//		n2 = temp;
//	}
//	printf("\n第三次处理后n1=%d,n2=%d,n3=%d", n1, n2, n3);
//	//第三次处理后n1=5,n2=8,n3=10
//
//}	
//
///*
//894567秒合248小时29分27秒
//*/
//
///*
//n1=10,n2=8,n3=5
//第一次处理后n1=8,n2=10,n3=5
//第二次处理后n1=8,n2=5,n3=10
//第三次处理后n1=5,n2=8,n3=10
//*/