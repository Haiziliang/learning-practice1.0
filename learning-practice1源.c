//��һ������
/*
#include<stdio.h>
int main()
{
	printf("Hello World!\n");
	printf("��� ���磡\n���������ͣ�\n");
	return 0;
}
*/
//������
//plus
/*
#include<stdio.h>
int main()
{
	int a;
	int b;
	printf("����������������");
	scanf_s("%d %d", &a, &b);
	printf("%d + %d = %d\n",a,b,a+b);
	return 0;
}
*/
//100Ԫ����change
/*
#include<stdio.h>
int main()
{
	int price = 0;
	printf("�������Ԫ����");
	scanf_s("%ld", &price);
	int change = 100 - price;
	printf("����%ldԪ��\n", change);
}
*/
//100Ԫ����2change2

/*
#include<stdio.h>
int main()
{
	const int AMOUNT = 100;
	int price = 0;
	printf("�������Ԫ����");
	scanf_s("%d", &price);
	int change = AMOUNT - price;
	printf("����%dԪ��\n", change);
	return 0
}

*/
//height2
/*
#include<stdio.h>
int main()
{
	printf("��������ߵ�Ӣ����Ӣ�磬"
		"������\"5 7\"��ʾ5Ӣ��7Ӣ��\n");
	double foot;
	double inch;
	scanf_s("%lf %lf",&foot,&inch);
	printf("�����%f�ס�\n",
		((foot + inch / 12) * 0.3048));
	return 0;
}
*/
//average
/*
#include<stdio.h>
int main()
{
	int a,b;
	scanf_s("%d %d", &a,&b);
	double c = (a + b) / 2.0;
	printf("%d��%d��ƽ��ֵΪ%f\n",a,b,c);
	return 0;
}
*/
//age
/*
#include<stdio.h>
int main()
{
	const int MINOR = 35;
	int age = 0;
	printf("�������������䣺");
	scanf_s("%d", &age);
	printf("����������%d�ꡣ\n",age);
		if (age < MINOR) {
			printf("����ʱ���õ�\n");
		}
		printf("������������ľ������磬�ú���ϧ�ɡ�\n");
		return 0;
}
*/
//change3
/*
#include<stdio.h>
int main()
{
	//  ��ʼ��
	int price = 0;
	int bill = 0;
	//  �������Ʊ��
	printf("�������");
	scanf_s("%d", &price);
	printf("������Ʊ�棺");
	scanf_s("%d", &bill);
	//  ��������
	printf("Ӧ��������%dԪ\n", bill - price);
	return 0;
}
*/
//change4
/*
#include<stdio.h>
int main()
{
	//  ��ʼ��
	int price = 0, bill = 0;
	//  �������Ʊ��
	printf("�������");
	scanf_s("%d", &price);
	printf("������Ʊ�棺");
	scanf_s("%d", &bill);
	//  ��������
	if (bill >= price) {
		printf("Ӧ������%dԪ��\n", bill - price);
	}
	return 0;
}
*/
// change5
/*
#include<stdio.h>
int main()
{
	int price = 0, bill = 0;
	printf("�������");
	scanf_s("%d", &price);
	printf("������Ʊ�棺");
	scanf_s("%d", &bill);
	if (bill >= price) {
		printf("Ӧ��������%dԪ\n", bill - price);
	}
	else {
		printf("���Ǯ����\n");
	}
	return 0;
}
*/
//interval2
/*
#include<stdio.h>
int main()
{
	int hour1, minute1;
	int hour2, minute2;
	scanf_s("%d %d", &hour1, &minute1);
	scanf_s("%d %d", &hour2, &minute2);
	int ih = hour2 - hour1;
	int im = minute2 - minute1;
	if (im < 0) {
		im = 60 + im;
			ih--;
	}
	printf("ʱ�����%dʱ%d��\n", ih, im);
	return 0;
}
*/
//max
//#include<stdio.h>
//int main()
//{
	//  ��һ��
	/*
	int a, b;
	printf("����������������\n");
	scanf_s("%d %d", &a, &b);
	int max = b;
	if (a > b) {
		max = a;
	}
	*/
	//  �ڶ���
	/*
	int a, b, c;
	scanf_s("%d %d %d", &a, &b, &c);
	int max = b;
	if (a > b||c>b) {
		if (a > c) {
			max = a;
		}
		else {
			max = c;
		}
	}*/
	/*
	printf("�ϴ���Ϊ%d��", max);
	return 0;
	}
	*/
	// �������λ��
	/*
	#include<stdio.h>
	int main()
	{
		int a = 0;
		int b, c, d,e;
		scanf_s("%d", &a);
		b = a / 100;
		d = a % 10;
		c = a / 10 % 10;
		e = d* 100 + c* 10 + b;
		printf("%d", e);
		return 0;
	}
	*/
	//salary
	/*
	#include<stdio.h>
	int main()
	{
		const double RATE = 8.25;
		const int STANDARD = 40;
		double pay = 0.0;
		int hours;
		printf("�����빤����Сʱ����");
		scanf_s("%d", &hours);
		printf("\n");
		if (hours > STANDARD)
			pay = STANDARD * RATE + (hours - STANDARD) * (RATE * 1.5);
		else
			pay = hours * RATE;
		printf("Ӧ�����ʣ�%fԪ\n",pay);
		return 0;
	}
	*/
	//�жϳɼ�
	/*
	#include<stdio.h>
	int main()
	{
		const int PASS = 60;
		int score;
		printf("������ɼ���");
		scanf_s("%d", &score);
		printf("������ĳɼ�Ϊ%d\n", score);
		if (score < PASS)
			printf("���ź�������ɼ�û�м���\n");
		else
			printf("ף���㣬����ɼ������ˡ�\n");
		printf("�ټ�");
		return 0;
	}
	*/
	//������λ��(������)
	/*
	#include<stdio.h>
	int main()
	{
		int x = 0;
		int n = 0;
		scanf_s("%d", &x);
		n++;
		x /= 10;
		while (x > 0) {
			n++;
			x /= 10;
		}
		printf("%d", n);
		return 0;
	}
	*/
	//������λ��(�Ǹ���)
/*
#include<stdio.h>
int main()
{
	int x = 0;
	int n = 0;
	scanf_s("%d", &x);
	do {
		n = n + 1;
		x = x / 10;
	}

	while (x > 0);
	printf("%d", n);
	return 0;
}
*/
	//BMI������
/*
#include<stdio.h>
int main()
{
	double height = 0,weight = 0;
	printf("������������ߣ��ף������أ���������磺���� 1.7 70 ��ʾ1.7����70����");
		scanf_s("%lf %lf",height,weight);
		printf("���������ֵΪ%f %f".height, weight);
		int bmi;
		bmi = weight / (height * height);
		printf("����BMIΪ%f");
		if(bmi>)

	return 0;
}
*/
//n�Ľ׳ˣ���������
/*
#include<stdio.h>
int main()
{
	int n;
	scanf_s("%d", &n);
	int fact = 1;
	int i = 1;
	while (i <= n) {
		fact = fact * i;
		i = i + 1;
	}
	printf("%d!=%d", n, fact);
	return 0;
}
*/
//n�Ľ׳ˣ��Ǹ�������
/*
#include<stdio.h>
int mian()
{
	int n;
	scanf_s("%d", &n);
	int fact = 1;
	int i = 1;
	for (; i <= n; i++) {
		fact *= i;
	}
	printf("n!=%d", fact);
	return 0;
}
*/

//��·��֧
/*
#include<stdio.h>
int main()
{
	int type=0;
	scanf_s("%d", &type);
	switch (type) {
	case 1:
		printf("���Ϻ�\n");
		break;
	case 2:
		printf("�����\n");
		break;
	case 3:
		printf("���Ϻ�\n");
		break;
	}
	return 0;
}
*/
//������Ϸ
/*
#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main()
{
	srand(time(0));
	int number = rand() % 100 + 1;
	int count = 0;
	int a = 0;
	printf("���Ѿ������һ��1��100֮�������");
		do {
			printf("��²����1��100֮�������\n");
			scanf_s("%d", &a);
			count ++;
			if (a > number) {
				printf("��µ�������");
			}
			else if (a < number) {
				printf("��µ���С��");
			}
		} while (a != number);
		printf("̫���ˣ�������%d�ξͲµ��˴𰸡�\n", count);
	return 0;
}
*/
//��������

//����������
/*
#include<stdio.h>
int main()
{
	int x = 0,i=0;
	printf("��������ֵ��\n");
	scanf_s("%d", &x)
	int n = x-1;
	do {
		i = x % n;
		n--;
	} while (i != 0);
	if (n != 0) {
		printf("%d��������",x);
	}
	else {
		printf("%d������",x);
	}
	return 0;
}
*/
//������
/*
#include<stdio.h>
int main()
{
	printf("%d", );
	return 0;
}
*/
//{1+1/2+1/3=������1/n}ǰn�����
/*
#include<stdio.h>
int main()
{
	int n = 0;
	int i = 0;
	double sum = 0.0;
	//int sign = 1;
	double sign = 1.0;

	printf("����������n��");
	scanf_s("%d", &n);

	for (i = 1; i <= n; i++) {
		sum = sign/ i + sum;
		sign = -sign;
	}
	printf("%f", sum);
	return 0;
}
*/
//���Լ����շת�������
/*
#include<stdio.h>
int main()
{
	int a = 0, b = 0, x = 0;

	printf("������������ֵ��");
	scanf_s("%d %d", &a, &b);
	do {
		x = a % b;
		a = b;
		b = x;
	} while (b != 0);
	printf("�������������Լ����%d", a);
	return 0;
}
*/
//���飨����ƽ������
/*
#include<stdio.h>
int main()
{
	int i;
	int n;



	printf("���������ֵĸ���Ϊ��");
	scanf_s("%d", n);

	int number[10];


	for (i = 0; i < n; i++) {
		scanf_s("%d", i);
		number[i]++;
	}

	printf("%d:%d", i, number[i]);

	return 0;
}
*/
//
/*
#include<stdio.h>

void cheer(int a);

int main()
{
	cheer(2.4);
	return 0;
}

void cheer(int a) {
	printf("cheer %d\n",a);
}*/
//��ά����
/*
#include<stdio.h>
int main()
{
	int a[2][5] = {
		{2,4,2,6,3},
		{6,5,4,7,3}
	};
	int i, j;

	for (i = 0; i < 2; i++) {
		for (j = 0; j < 5; j++) {
			printf("%d\n", a[i][j]);
		}
	}
	return 0;
}
*/
//ָ��
/*
#include<stdio.h>
int main()
{
	int x = 0;
	printf("sizeof(char)=%d", sizeof(char));
	return 0;
}
*/
