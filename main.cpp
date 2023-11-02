#include<stdio.h>

int Recursive(int m ,int n ) {
	if (n == 1) {
		return m;
	}
	if (n > 1) {
		return m+ Recursive(m * 2 - 50,n-1);
	}

}


int main() {
	int hoursWorked = 1;
	int salary = 1072;
	int normalSalary = 0;
	int recursionSalary = 0;

	
	for (int i = 1; i < 10; i++) {
		//通常
		normalSalary = salary * hoursWorked;

		//再帰
		recursionSalary = Recursive(100, hoursWorked);

		printf("%d時間", i);
		printf("通常だと%d円\n", normalSalary);
		printf("再帰だと%d円\n\n", recursionSalary);

		if (recursionSalary < normalSalary) {

			hoursWorked++;
		}
		if (recursionSalary > normalSalary) {
			printf("再帰的な賃金が超えました\n");
			break;
		}
	}


	printf("よって8時間である\n");




	return 0;
}
