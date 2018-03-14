/*
We can use different methods to find the Fibonacci number.
In this exercise, I have used 3 methods to find the Fibonacci number in nth place
1) Recursion,
2) Dynamic programming and
3) Second Order Linear Homogeneous Recurrence Relation with Constant Coefficients(SOLHRRwCC)
method here.

Fibonacci numbers are: 1, 1, 2, 3, 5, 8, 13...
*/

# include <iostream>

using namespace std;

/*Using recursion
With recursion, we use a lot of memory space and need to calculate same elements
over and over again. Hence, dynamic method is better than recursion method
*/
int fibonacci(int num) {
	//num cannot be negative number
	if (num < 0) {
		cout << "Please enter a possitive number\n";
		return 0;
	}
	else if (num < 2) {
			return num;
		}
	return (fibonacci(num - 1) + fibonacci(num - 2));
}

/*dynamic programing
Dynamic method is better than recursion since we calculate value of an
element only once. However, it will be better to have a formula in which
we plug in number and get its value, for this we use SOLHRRwCC
*/
int dynamic_fib(int num) {
	int *arr = new int[num + 1], sum = 0 ;
	arr[0] = 0;
	arr[1] = 1; 
	for (int i = 2; i <= num; i++) {
		arr[i] = arr[i - 1] + arr[i - 2];
		sum = arr[i];
	}
	return sum;
}

/*SOLHRRwCC Fibonacci sequence
This is the best way so far because in this method we receive element position
And we just plug in this number in the formula
SOLHRRwCC = (1.6180339^n + (-0.6180339)^n + 1)/ 2.236067977
*/
int solhrrwcc_fib(int num) {
	double n = (pow(1.6180339, num) - (pow(-0.6180339, num))+1 )/ 2.236067977;
	return n; 
}

int main() {
	int n =7; 
	//cout << "Enter a number:" << n; 
	cout<< "Fibonacci number (recursion): " <<fibonacci(n)<<endl;
	cout << "Fibonacci number (dynamic): " << dynamic_fib(n) << endl;
	cout << "Fibonacci number(SOLHRRwCC) : " << solhrrwcc_fib(n) << endl;
	system("pause");
}