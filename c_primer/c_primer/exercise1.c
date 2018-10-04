//练习2.1
//#include <stdio.h>
//#include <stdlib.h>
//
//int main(){
//	printf("Qin qianyu\n");
//	printf("Qin\nqianyu\n");
//	printf("Qin");
//	printf(" qianyu\n");
//	
//	system("pause");
//	return  0;
//}

//练习2.2  打印姓名和地址
//#include <stdio.h>
//#include <stdlib.h>
//
//int main(){
//	printf("Qin qianyu\n");
//	printf("Shanxi  xi'an\n");
//
//	system("pause");
//	return  0;
//}

//练习2.3  把年龄转换成天数，并显示这两个值
//#include <stdio.h>
//#include <stdlib.h>
//
//int main(){
//	int age = 20;
//	int day = age * 365;
//	printf("I am %d years,It's %d days.\n", age, day);
//	system("pause");
//	return  0;
//}

//练习2.4 
//#include <stdio.h>
//#include <stdlib.h>
//
//void jolly(){
//	printf(" For he's a jolly good fellow!\n");
//}
//
//void deny(){
//	printf("  Which nobody can deny!\n");
//}
//
//int main(){
//	jolly();
//	jolly();
//	jolly();
//	deny();
//	system("pause");
//	return 0;
//}

//练习2.5
//#include <stdio.h>
//#include <stdlib.h>
//
//void br(){
//	printf("Brazil,Russia");
//}
//
//void ic(){
//	printf("India,China");
//}
//
//int main(){
//	br();
//	printf(",");
//	ic();
//	printf("\n");
//
//	ic();
//	printf(",\n");
//
//	br();
//	printf("\n");
//	system("pause");
//	return 0;
//}

//练习2.6
//#include <stdio.h>
//#include <stdlib.h>
//
//int main(){
//	int toes = 10;
//	printf("toes的值为10\n");
//	printf("toes的两倍为%d\n", 2*toes);
//	printf("toes的平方为%d\n", toes*toes);
//	system("pause");
//	return 0;
//}

//练习2.7
//#include <stdio.h>
//#include <stdlib.h>
//
//void Smile(){
//	printf("Smile!");
//}
//
//int main(){
//	Smile();
//	Smile();
//	Smile();
//	printf("\n");
//
//	Smile();
//	Smile();
//	printf("\n");
//
//	Smile();
//	printf("\n");
//	system("pause");
//	return 0;
//}

////练习2.8
//#include <stdio.h>
//#include <stdlib.h>
//
//void one_three(){
//	printf("one\n");
//}
//
//void two(){
//	printf("two\n");
//}
//
//int main(){
//	printf("starting now：\n");
//	one_three();
//	two();
//	printf("three\n  done！\n");
//	system("pause");
//	return 0;
//}

////例题3.3
//#include <stdio.h>
//#include <stdlib.h>
//
//int main(){
//	int num = 100;
//
//	printf("10的十进制表示为%d,十六进制表示为%x，八进制表示为%o\n", num, num, num);
//	printf("10的十进制表示为%d,十六进制表示为%#x，八进制表示为%#o\n", num, num, num);
//
//	system("pause");
//	return 0;
//}

////例题3.4
//#include <stdio.h>
//#include <stdlib.h>
//
//int main(){
//	unsigned int un = 3000000000;
//	short end = 200;
//	long big = 65537;
//	long long verybig = 12345678905896;
//
//	printf("un=%u and not %d\n", un, un);
//	printf("end=%hd and not %d\n", end, end);
//	printf("big=%ld and not %hd\n", big, big);
//	printf("verybig=%lld and not %ld\n", verybig, verybig);
//
//	system("pause");
//	return 0;
//}

//练习3.2
//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//#include <stdlib.h>
//
//int main(){
//	int ASCII;
//
//	printf("请输入一个ASCII码：");
//	scanf("%d",& ASCII);
//
//	printf("\n所输入ASCII码对应的字符为：%c\n", ASCII);
//	system("pause");
//	return 0;
//}

//练习3.3
//#include <stdio.h>
//#include <stdlib.h>
//
//int main(){
//	printf("\a Startled by the sudden sound,Sally shouted,\n");
//	printf("\"By the Great Pumpkin, what was that！\"\n");
//
//	system("pause");
//	return 0;
//}

//练习3.4
//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//#include <stdlib.h>
//
//int main(){
//	float f;
//	printf("Enter a floating-point value:");
//	scanf("%f", &f);
//
//	printf("\nfixed-point notation:%f\n", f);
//	printf("exponential notation:%e\n", f);
//	printf("p notation:%a\n", f);
//
//	system("pause");
//	return 0;
//}

//练习3.5
//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//#include <stdlib.h>
//
//int main(){
//	int age;
//	printf("请输入您的年龄：");
//	scanf("%d", &age);
//
//	printf("\n您的年龄所对应的秒数为：%f\n", age * 3.156e7);
//	system("pause");
//	return 0;
//}

//练习3.6
//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//#include <stdlib.h>
//
//int main(){
//	float quart;
//	float mole;
//	printf("请输入水的夸脱数:");
//	scanf("%d", &quart);
//	printf("\n");
//
//	1quart=950g,m水=3.0*10^-23
//	水分子数=quart*950/（3.0e-23）
//	mole = quart * 950 / (3.0e-23);
//	printf("水分子的数量为：%e\n", mole);
//	system("pause");
//	return 0;
//}

//练习3.7
//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//#include <stdlib.h>
//
//int main(){
//	int height;
//	float hei;
//	printf("请输入身高(英寸)");
//	scanf("%d", &height);
//
//	//1英寸相当于2.54厘米
//	hei = 2.54*height;
//	printf("您的身高是%f厘米\n", hei);
//	system("pause");
//	return 0;
//}

//练习3.8
//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//#include <stdlib.h>
//
//int main(){
//	float cup;
//	float pint;
//	float Oz;
//	float spoon;
//	float teaspoon;
//
//	printf("请输入杯数：");
//	scanf("%f", &cup);
//	printf("\n");
//
//	//1品脱等于2杯，1杯等于8盎司
//	//1 盎司等于2大汤勺（即1杯等于16大汤勺）
//	//1大汤勺等于3茶勺（即1杯等于48茶勺）
//	pint = 2 * cup;
//	Oz = cup / 8;
//	spoon = cup / 16;
//	teaspoon = cup / 48;
//
//	printf("%f杯等于%f品脱\n", cup, pint);
//	printf("%f杯等于%f盎司\n", cup, Oz);
//	printf("%f杯等于%f大汤勺\n", cup, spoon);
//	printf("%f杯等于%f茶勺\n", cup, teaspoon);
//	system("pause");
//	return 0;
//}

////复习题4.5
//#define _CRT_SECURE_NO_WARNINGS
//#define BOOK "War and Peace"
//#include <stdio.h>
//#include <stdlib.h>
//
//int main(){
//	float cost = 12.99;
//	float percent = 80.0;
//
//	printf("This copy of \"BOOK\" sells for %.2f\n", cost);
//	printf("That is %.0f%% of list\n", percent);
//	system("pause");
//	return 0;
//}

//练习4.1
//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//#include <stdlib.h>
//
//int main(){
//	char nom[40];
//	char prenom[40];
//
//	printf("请输入您的姓名：\n");
//	scanf("%s %s", nom,prenom);
//	printf("%s,%s",prenom,nom);
//
//	system("pause");
//	return 0;
//}

//练习4.21
//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//#include <stdlib.h>
//#include <string.h>
//
//int main(){
//	char name[40];
//	int length;
//	
//	printf("请输入您的姓名：\n");
//	scanf("%s", name);
//	length = strlen(name) + 3;
//	printf("您的名字为：\"%*s\"\n", length,name);
//
//	system("pause");
//	return 0;
//}

//练习4.3
//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//#include <stdlib.h>
//
//int main(){
//	float i;
//	float j;
//	printf("请输入一个浮点数：");
//	scanf("%f", &i);
//	printf("The input is %.1f or %.1e.\n",i,i);
//
//	printf("请再输入一个浮点数：");
//	scanf("%f", &j);
//	printf("The input is %+.3f or %.3E.\n", j,j);
//	system("pause");
//	return 0;
//}

//练习4.4
//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//#include <stdlib.h>
//
//int main(){
//	char name[40];
//	float height;
//	float feet;
//
//	printf("请输入身高(单位:英寸)和姓名：");
//	scanf("%f %s", &height, name);
//	//1英寸=0.076199999884176尺
//	feet = 0.076199999884176*height;
//	printf("%s, you are %.3f feet tall\n", name, feet);
//
//	system("pause");
//	return 0;
//}

//练习4.5
//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//#include <stdlib.h>
//
//int main(){
//	float speed, size,time;
//
//	printf("请输入以兆位每秒(Mb / s)为单位的下载速度和以兆字节(MB)为单位的文件大小\n");
//	scanf("%f %f", &speed,&size);
//	//1字节等于8位
//	time = 8 * size / speed;
//	printf("At %.2f megabits per second, a file of %.2f megabytes\n\
//downloads in %.2f seconds.\n", speed, size, time);
//	system("pause");
//	return 0;
//}

//练习4.6
//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//#include <stdlib.h>
//#include <string.h>
//
//int main(){
//    char nom[40];
//	char prenom[40];
//	int length,lengthp;
//
//	printf("请输入名：\n");
//	scanf("%s", &prenom);
//	printf("请输入姓：\n");
//	scanf("%s", &nom);
//
//	length = strlen(nom) ; 
//	lengthp = strlen(prenom);
//	printf("%s %s\n", prenom, nom);
//	printf("%*d %*d\n", lengthp, lengthp, length,length);
//
//	printf("%s %s\n", prenom, nom);
//	printf("%-*d %-*d\n", lengthp, lengthp, length, length);
//
//	system("pause");
//	return 0;
//}

//练习4.7
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <float.h>

int main(){
	double d = 1.0 / 3.0;
	float f = 1.0 / 3.0;
	
	printf("d=%.6lf    f=%.6f\n",d,f);
	printf("d=%.12lf    f=%.12f\n", d, f);
	printf("d=%.16lf    f=%.16f\n", d, f);
	printf("FLT_ DIG: %d\n", FLT_DIG);
	printf("DBL_DIG: %d\n", DBL_DIG);
	system("pause");
	return 0;
}










//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//#include <stdlib.h>
//
//int main(){
//
//	system("pause");
//	return 0;
//}