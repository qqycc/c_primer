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