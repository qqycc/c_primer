// 1.创建一个包含26个元素的数组，并在其中存储26个小写字母。
//然后打印数组的所有内容。
//#include <stdio.h>
//#include <stdlib.h>
//
//int main(){
//	char arr[26] = { 0 };
//	int i = 0;
//	char j = 'a';
//	for (i; i < 26;i++){
//		arr[i] = j;
//		j++;
//	}
//	for (i = 0; i < 26; i++){
//		printf("%c ", arr[i]);
//	}
//	printf("\n");
//	system("pause");
//	return 0;
//}

//2.使用嵌套循环，按下面的格式打印字符：
//$
//$$
//$$$
//$$$$
//$$$$$
//#include <stdio.h>
//#include <stdlib.h>
//
//int main(){
//	for (int j = 1; j < 6; j++){
//		for (int i=0; i < 6; i++){
//			if (i == j){
//				break;
//			}
//			printf("$");
//		}
//		printf("\n");
//	}
//	system("pause");
//	return 0;
//}

//3.使用嵌套循环，按下面的格式打印字母：
//F
//FE
//FED
//FEDC
//FEDCB
//FEDCBA
//
//#include <stdio.h>
//#include <stdlib.h>
//
//int main(){
//	char arr[] = { 70,69,68,67,66,65};
//	for (int i = 0; i < 6; i++){
//		for (int j = 0; j < i + 1; j++){
//			printf("%c", arr[j]);
//		}
//		printf("\n");
//
//	}
//	system("pause");
//	return 0;
//}

//使用嵌套循环， 按下面的格式打印字母:
//A   0
//BC   1 2
//DFE   3 4 5
//GHIJ   6 7 8 9
//KLMNO
//PQRSTU
//#include <stdio.h>
//#include <stdlib.h>
//
//int main(){
//	char a = 'A';
//	for (int i = 0; i < 6; i++) {
//		for (int j = 0; j <= i; j++) {
//			printf("%c", a++);
//		}
//		printf("\n");
//	}
//	system("pause");
//	return 0;
//}

//5.编写一个程序，提示用户输入大写字母。使用嵌套循环以下面金字塔型的格式打印字母:
//A
//ABA
//ABCBA
//ABCDBCA
//ABCDEBDCA
//打印这样的图形，要根据用户输入的字母来决定例如， 上面的图形是在用户输入E后的打印结果。
//提示 : 用外层循环处理行，每行使用3个内层循环，分别处理空格、以升序打印字母、以降序打印字母。
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

int main(){
	char letter;
	char a = 'A';
	printf("请输入一个字母：");
	scanf("%c", &letter);
	int num = letter - a+1;   //5
	//外层循环
	for (int i = 0; i < num; i++){
		//内层循环
		//空格
		for (int j = 0; j < num - 1; j++){
			printf(" ");
		}
		num --;
		//升序打印字母
		a = 'A';
		for (int k = 0; k <= i;k++){
			printf("%c", a);
			a++;
		}
		//降序打印字母
		for (int m = 0; m < i - 1;m++){
			printf("%c", letter - 1);
			letter --;
		}
		printf("\n");
	}
	system("pause");
	return 0;
}


//#include <stdio.h>
//#include <stdlib.h>
//
//int main(){
//
//	system("pause");
//	return 0;
//}