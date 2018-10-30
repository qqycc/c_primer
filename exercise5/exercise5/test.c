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
#define  _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

int main(){
	int count, sum, day;
	count = 0;
	sum = 0;
	printf("请输入天数：\n");
	scanf("%d", &day);
	while (count++ < day){
		sum += count*count;
	}
	printf("sum=%d\n", sum);
	system("pause");
	return 0;
}



//#define  _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//#include <stdlib.h>
//
//int main(){
//
//
//	system("pause");
//	return 0;
//}