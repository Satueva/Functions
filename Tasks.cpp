#include <iostream>

int sum(int num1, int num2) {
	// int result = num1 + num2; ( �� ����������� )
	// return result;
	return num1 + num2;
}

void hi() {
	std::cout << "Hello World!\n";
	std::cout << "Bye World!\n";
}


// ������� ��� ������ ������� � �������
void print_arr(int arr[], const int length) {
	for (int i = 0; i < length; i++)
		std::cout << arr[i] << ' ';
	std::cout << std::endl;
}

void mult_x5(int num) {  // num - ��� �������� �������
	num *= 5;
}
//void arr_x5(int arr_el) {
void arr_x5(int arr[]) {
	arr[1] *= 5;
}

void positive_elements(int arr[], const int length) {
	for (int i = 0; i < length; i++)
		if (arr[i] > 0)
			std::cout << i << ' ';
	std::cout << std::endl;
}

int factorial(int num) {
	int result = 1;
	for (int i = 2; i <= num; i++)
		result *= i;
	return result;
}




int main() {
	setlocale(LC_ALL, "Russian");
	int n, m;

	// �������� � ����� ������� 
	hi(); // void �������

	std::cout << "������� ��� �����: ";
		std::cin >> n >> m;
	std::cout << sum(n, m) << std::endl;

	// ������� ���������� � ��������� 
	const int size = 5;
	int arrrrr[size]{ 8, 16, 42, 9, 11 }; 
	print_arr(arrrrr, size);

	arr_x5(arrrrr);
	print_arr(arrrrr, size);

	n = 7;
	mult_x5(n);  // n -  �� ������ ������� 
	std::cout << "n = " << n << std::endl;


	// ������ 1. ������� ������������� ��������� �������.
	std::cout << "\n������: \n";
	const int size1 = 5;
	int arr1[size1]{ 16, -4, 7, 0, 42 };
	print_arr(arr1, size1);
	std::cout << "������� ������������� ���������:\n";
	positive_elements(arr1, size1);
	std::cout << '\n';

	// ������ 2. ���������.
	std::cout << "\n������� �����: ";
	std::cin >> n;

	std::cout << n << "! = " << factorial(n) << std::endl;













return 0;
}