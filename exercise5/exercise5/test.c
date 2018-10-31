//1.
//#define  _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//#include <stdlib.h>
//
//#define time 60
//
//int main(){
//	while (1){
//		int minute = 0;
//		printf("请输入分钟数：");
//		scanf("%d", &minute);
//		if (minute <= 0){
//			break;
//		}
//		int hour = minute / time;
//		int min = minute - hour*time;
//		printf("%d分钟=%d小时%d分钟\n", minute, hour, min);
//	}
//	system("pause");
//	return 0;
//}

//2.
//#define  _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//#include <stdlib.h>
//
//int main(){
//	int num;
//	printf("请输入一个数：\n");
//	scanf("%d", &num);
//	int i = num;
//	for (num; num < (i + 11); num++){
//		printf("%d ", num);
//	}
//	printf("\n");
//	system("pause");
//	return 0;
//}

//3.
//#define  _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//#include <stdlib.h>
//
//int main(){
//	while (1){
//		int day = 0;
//		printf("请输入天数：\n");
//		scanf("%d", &day);
//		if (day <= 0){
//			break;
//		}
//		int week = day / 7;
//		int days = day-week * 7 ;
//		printf("%d days are %d weeks,%d days\n",day,week,days);
//	}
//	system("pause");
//	return 0;
//}

//4.提示用户输入一个身高（单位：厘米），并分别以厘米和英寸为单位显示该值。允许有小数部分。
//程序应该能让用户重复输入身高，直到用户输入一个非正值。其输出示例如下:
//Enter a height in centimeters : 182
//182.0 cm = 5 feet, 11.7 inches
//Enter a height in centimeters(<= 0 to quit) : 168.7
//168.7cm = 5 feet, 6.4 inches
//Enter a height in centimeters(<= 0 to quit) : 0
//bye
//#define  _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//#include <stdlib.h>
//
//int main(){
//	while (1){
//		float height=0;
//		printf("Enter a height in centimeters :");
//		scanf("%f", &height);
//		if (height <= 0){
//			break;
//		}
//		float inches = 0.3937008*height;
//		float feet = 0.03*height;
//		printf("\n%.1lfcm = %.0lf feet, %.1lf inches\n", height, feet, inches);
//	}
//	printf("bye\n");
//	system("pause");
//	return 0;
//}

//5.可以认为addemup .c是计算20天里赚多少钱的程序（假设第1天赚$1、第2天赚$2、第3天赚$3,以此类推)。
//修改程序，使其可以与用户交互，根据用户输入的数进行计算(即，用读入的一个变量来代替20)。
//#define  _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//#include <stdlib.h>
//
//int main(){
//	int count, sum, day;
//	count = 0;
//	sum = 0;
//	printf("请输入天数：\n");
//	scanf("%d", &day);
//	while (count++ < day){
//		sum = sum + count;
//	}
//	printf("sum=%d\n", sum);
//	system("pause");
//	return 0;
//}

//6.修改编程练习5的程序，使其能计算整数的平方和(可以认为第1天赚$1、第2天赚$4、第3天赚$9， 以此类推）。
//C没有平方函数，但是可以用n * n来表示n的平方。
//#define  _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//#include <stdlib.h>
//
//int main(){
//	int count, sum, day;
//	count = 0;
//	sum = 0;
//	printf("请输入天数：\n");
//	scanf("%d", &day);
//	while (count++ < day){
//		sum += count*count;
//	}
//	printf("sum=%d\n", sum);
//	system("pause");
//	return 0;
//}

//7.编写一个程序，提示用户输入一个double类型的数，并打印该数的立方值。
//自己设计一个函数计算并打印立方值。main ()函数要把用户输入的值传递给该函数。
//#define  _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//#include <stdlib.h>
//
//double Cube(double num){
//	double cube = num*num*num;
//	return cube;
//}
//
//int main(){
//	double num;
//	printf("请输入一个数（double）：\n");
//	scanf("%lf", &num);
//	printf("该数立方为：%lf\n", Cube(num));
//	system("pause");
//	return 0;
//}

//8.编写一个程序，显示求模运算的结果。把用户输入的第1个整数作为求模运算符的第2个运算对象，
//该数在运算过程中保持不变。用户后面输人的数是第1个运算对象。当用户输入一个非正值时，程序结束。
//其输出示例如下:
//This program computes modull.
// Enter an integer to serve as the second operand : 256
// Now enter the first operand : 438
// 438 % 256 is 182
// Enter next number for first operand(<= 0 to quit) : 1234567
// 1234567 % 256 is 135
// Enter next number for first operand(<= 0 to quit) : 0
// Done
//#define  _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//#include <stdlib.h>
//
//int main(){
//	int count = 0;
//	int num1, num2, remainder;	
//	while (1){	
//		if (count == 0){
//			printf("This program computes modull.\n");
//			printf("Enter an integer to serve as the second operand : ");
//			scanf("%d", &num2);
//			printf("\nNow enter the first operand : ");
//			scanf("%d", &num1);
//		}
//		else if (count != 0){
//			printf(" Enter next number for first operand(<= 0 to quit) : ");
//			scanf("%d", &num1);
//		}
//		if (num1 <= 0){
//			break;
//		}
//		count++;
//		remainder = num1%num2;
//		printf("\n%d %% %d is %d\n", num1, num2, remainder);
//	}
//	printf("\nDone\n");
//	system("pause");
//	return 0;
//}

//9.编写一个程序，要求用户输入一个华氏温度。程序应读取double类型的值作为温度值，
//并把该值作为参数传递给一个用户自定义的函数Temperatures()。
//该函数计算摄氏温度和开氏温度，并以小数点后面两位数字的精度显示3种温度。
//要使用不同的温标来表示这3个温度值。下面是华氏温度转摄氏温度的公式:
//    摄氏温度 = 5.0 / 9.0*(华氏温度 - 32.0)
//开氏温标常用于科学研究，0表示绝对零，代表最低的温度。下面是摄氏温度转开氏温度的公式:
//    开氏温度 = 摄氏温度 + 273.16
//Temperatures()函数中用const创建温度转换中使用的变量。

//在main()函数中使用一个循环让用户重复输入温度，当用户输入q或其他非数字时，循环结束。
//scanf()函数返回读取数据的数量，所以如果读取数字则返回1，如果读取q则不返回1。
//可以使用 == 运算符将scanf()的返回值和1作比较，测试两值是否相等。
#define  _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
//celsius  kelvin
void Temperatures(double fahrenheit){
	const double ctran = 5.0 / 9.0;
	const double ktran = 273.16;
	double celsius = ctran*(fahrenheit-32.0);
	double kelvin = celsius+ktran;
	printf("%.2lf华氏温度 = %.2lf摄氏温度 = %.2lf开氏温度\n", fahrenheit, celsius, kelvin);
}

int main(){
	while (1){
		double fahrenheit = 0;
		printf("请输入一个温度（华氏）：\n");
		if (scanf("%lf", &fahrenheit) != 1){
			break;
		}
		Temperatures(fahrenheit);
	}
	system("pause");
	return 0;
}