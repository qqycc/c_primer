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
//		printf("�������������");
//		scanf("%d", &minute);
//		if (minute <= 0){
//			break;
//		}
//		int hour = minute / time;
//		int min = minute - hour*time;
//		printf("%d����=%dСʱ%d����\n", minute, hour, min);
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
//	printf("������һ������\n");
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
//		printf("������������\n");
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

//4.��ʾ�û�����һ����ߣ���λ�����ף������ֱ������׺�Ӣ��Ϊ��λ��ʾ��ֵ��������С�����֡�
//����Ӧ�������û��ظ�������ߣ�ֱ���û�����һ������ֵ�������ʾ������:
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

//5.������Ϊaddemup .c�Ǽ���20����׬����Ǯ�ĳ��򣨼����1��׬$1����2��׬$2����3��׬$3,�Դ�����)��
//�޸ĳ���ʹ��������û������������û�����������м���(�����ö����һ������������20)��
//#define  _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//#include <stdlib.h>
//
//int main(){
//	int count, sum, day;
//	count = 0;
//	sum = 0;
//	printf("������������\n");
//	scanf("%d", &day);
//	while (count++ < day){
//		sum = sum + count;
//	}
//	printf("sum=%d\n", sum);
//	system("pause");
//	return 0;
//}

//6.�޸ı����ϰ5�ĳ���ʹ���ܼ���������ƽ����(������Ϊ��1��׬$1����2��׬$4����3��׬$9�� �Դ����ƣ���
//Cû��ƽ�����������ǿ�����n * n����ʾn��ƽ����
#define  _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

int main(){
	int count, sum, day;
	count = 0;
	sum = 0;
	printf("������������\n");
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