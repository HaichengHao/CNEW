//#define _CRT_SECURE_NO_WARNINGS //忽略安全检测，不然使用scanf会报错
////方式2：将使用的scanf函数替换为scanf_s，好像scanf_s只有微软的编译器支持。
// //***注意，scanf,传入的参数值是值传递，没法修改到原变量，所以必须取地址。****
//#include<stdio.h>
//void main() {
//	//使用字符数组接收名字
//	char name[10] = ""; 
//	int age = 0;
//	printf("age的地址%p", &age);
//	double sal = 0.0;
//	char gender = ' ';
//	//提示用户输入信息
//	printf("请输入名字:");
//	scanf("%s", name);//表示接受一个字符串，存放到“name”字符数组中
//	
//	printf("请输入年龄:");
//	//我们上面定义了一个a=0,这时我们需要给age扫描赋值，但是我们不能用scanf("%d,age),
//	//因为这里的age不是我们所定义的age,它是一个形式参数，我们无法给它赋值，所以需要地址符将形参存入到我们的实参中
//	scanf("%d", &age);//因为我们将得到输入存放到age变量指向地址中，因此需要加“&”
//	printf("age的地址%p", &age);
//	printf("请输入薪水:");
//	scanf("%lf", &sal);//-----===接收一个double时，格式参数得时%lf
//	
//	printf("请输入你的性别：");
//	scanf("%c", &gender);//这里是接收了上面的回车符
//	scanf("%c", &gender);//等待用户输入
//
//	printf("姓名%s,年龄%d,薪水%.2f,性别%c", name, age, sal, gender);
//
//	getchar();//接收到一个回车
//	getchar();//让控制台暂停
//}
///*
//int x = 0;
//scanf("%d",x);<--这样是错误的，是会报错的
//scanf("%d",&x);<--这样是正确的
//细节
//在c中，参数按值传递，因此，若将x用作参数scanf，它只获取值的副本，
//则不会获取对实际变量的引用。。通过传递指针，可以为其提供age变量的内存地址
//这时就允许通过存储到该内存中scanf扫描的输入数字来修改x;
//
//定义一个变量时，在键盘上输入一个scanf会吸收回车和空格字符，为了进行
//代码的可行性，需要在函数结束前加上函数getchar()对那些回车和空格进行吸收
//*/
//
///*
//请输入名字:wdaw
//请输入年龄:12
//请输入薪水:1202.1
//请输入你的性别：m
//姓名wdaw,年龄12,薪水1202.10,性别m
//*/