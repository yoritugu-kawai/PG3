#include<stdio.h>
template<typename T>

T Min(T a, T b) {
	if (a < b) {
		return a;
	}
	if (a > b) {
		return b;
	}
}
template<>
char Min<char>(char a, char b) {
	printf("数字以外は代入出来ません");
	return 0;

}


int main() {
	//int型
	printf("%d or%d = %d\n", 4,5,Min<int>(4, 5));
	//float型
	printf("%.1f or %.1f = %.1f\n",4.2f,4.3f, Min<float>(4.2f, 4.3f));
	//double型
	printf("%.1lf or %.1lf = %.1lf\n",4.3f,4.1f, Min<double>(4.3f, 4.1f));
	//char型
　 Min<char>('a', 'b');
	return 0;
}
