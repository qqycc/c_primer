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
#include <stdio.h>
#include <stdlib.h>

int main(){
	for (int j = 1; j < 6; j++){
		for (int i=0; i < 6; i++){
			if (i == j){
				break;
			}
			printf("$");
		}
		printf("\n");
	}
	system("pause");
	return 0;
}