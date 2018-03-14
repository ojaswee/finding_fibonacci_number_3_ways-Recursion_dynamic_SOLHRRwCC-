# finding_fibonacci_number_3_ways-Recursion_dynamic_SOLHRRwCC

We can use different methods to find the Fibonacci number. 
In this exercise, I have used 3 methods to find the Fibonacci number in nth place
1) Recursion, 
2) Dynamic programming and 
3) Second Order Linear Homogeneous Recurrence Relation with Constant Coefficients(SOLHRRwCC)

Fibonacci numbers are: 1, 1, 2, 3, 5, 8, 13...

Problem with recursion:
With recursion, we use a lot of memory space and need to calculate same elements 
over and over again. Hence, dynamic method is better than recursion method

Problem with dynamic programming method:
Dynamic method is better than recursion since we calculate value of an 
element only once. However, it will be better to have a formula in which 
we plug in number and get its value, for this we use SOLHRRwCC

SOLHRRwCC method:
This is the best way among these three because in this method we receive element position
then we just plug in this number in the formula
SOLHRRwCC = (1.6180339^n + (-0.6180339)^n + 1)/ 2.236067977
