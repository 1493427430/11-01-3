#include<stdio.h>//陈杨 
#include<math.h>
int main() {
	float x, y;
	printf("请输入x；");
	scanf("%f", &x);
	if (x < 0)
		printf("y的值为：%.2f", pow(x, 5) + 2 * x + 1 / x);
	else
		printf("y的值为：%.2f", sqrt(x));
	return 0;
}
