// 1.����һ������26��Ԫ�ص����飬�������д洢26��Сд��ĸ��
//Ȼ���ӡ������������ݡ�
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

//2.ʹ��Ƕ��ѭ����������ĸ�ʽ��ӡ�ַ���
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

//3.ʹ��Ƕ��ѭ����������ĸ�ʽ��ӡ��ĸ��
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

//ʹ��Ƕ��ѭ���� ������ĸ�ʽ��ӡ��ĸ:
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

//5.��дһ��������ʾ�û������д��ĸ��ʹ��Ƕ��ѭ��������������͵ĸ�ʽ��ӡ��ĸ:
//A
//ABA
//ABCBA
//ABCDBCA
//ABCDEBDCA
//��ӡ������ͼ�Σ�Ҫ�����û��������ĸ���������磬 �����ͼ�������û�����E��Ĵ�ӡ�����
//��ʾ : �����ѭ�������У�ÿ��ʹ��3���ڲ�ѭ�����ֱ���ո��������ӡ��ĸ���Խ����ӡ��ĸ��
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

int main(){
	char letter;
	char a = 'A';
	printf("������һ����ĸ��");
	scanf("%c", &letter);
	int num = letter - a+1;   //5
	//���ѭ��
	for (int i = 0; i < num; i++){
		//�ڲ�ѭ��
		//�ո�
		for (int j = 0; j < num - 1; j++){
			printf(" ");
		}
		num --;
		//�����ӡ��ĸ
		a = 'A';
		for (int k = 0; k <= i;k++){
			printf("%c", a);
			a++;
		}
		//�����ӡ��ĸ
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