#include<stdio.h>//���� 
#include<math.h>
int main() {
	float x, y;
	printf("������x��");
	scanf("%f", &x);
	if (x < 0)
		printf("y��ֵΪ��%.2f", pow(x, 5) + 2 * x + 1 / x);
	else
		printf("y��ֵΪ��%.2f", sqrt(x));
	return 0;
}
