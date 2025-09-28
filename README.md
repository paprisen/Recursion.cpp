# Recursion.cpp

Aim: To study recursion in C++ using programs for factorial calculation, sum of n natural numbers, and reversal of a string.

Tools: VS Code

## Theory

Recursion is a programming technique in which a function calls itself directly or indirectly to solve a problem. The idea is to break down a large or complex problem into smaller subproblems of the same type.

A recursive function generally consists of two parts:

* Base Case – A condition where the recursion stops. Without a base case, recursion would continue indefinitely and cause a stack overflow.
  
* Recursive Case – The part of the function where it calls itself with a smaller or simpler input, gradually moving towards the base case.

## Why should we use Recursion?

It provides a natural and elegant solution for problems that can be defined in terms of smaller subproblems. Reduces the need for repetitive code and nested loops. Useful in problems like factorial, Fibonacci series, searching, sorting, backtracking, and divide-and-conquer algorithms.

## Syntax

```
return_type function_name(parameters) {
    if(base_condition) {
        // Base Case
        return base_value;
    }
    else {
        // Recursive Case
        return expression_involving(function_name(smaller_problem));
    }
}
```

## Program 1: Factorial of a Number

## Logic:

Factorial of a number n is defined as:

* Base Case: factorial(0) = 1
  
* Recursive Case: factorial(n) = n × factorial(n-1)
  
The program keeps multiplying the current number with the factorial of the previous number until it reaches 0.

## Algorithm:

1. Start

2. Define a recursive function factorial(n).

3. If n == 0, return 1.

4. Else return n × factorial(n-1).

5. In main( ), take input number n.

6. Call factorial(n) and display result.

7. End

## Program 2: Sum of First n Natural Numbers

## Logic:

The sum of first n numbers is defined as:

* Base Case: sum(0) = 0
  
* Recursive Case: sum(n) = n + sum(n-1)
  
This program repeatedly adds the current number n to the sum of the previous numbers until it reaches 0.

## Algorithm:

1. Start
   
2. Define a recursive function add_n(n).

3. If n == 0, return 0.

4. Else return n + add_n(n-1).

5. In main( ), take input number n.

6. Call add_n(n) and display result.

7. End

## Program 3: Reversal of a String

## Logic:

The string is reversed by recursively swapping characters from the beginning and the end:

* Base Case: If the starting index i is greater than or equal to the ending index j, stop recursion.
  
* Recursive Case: Swap characters at positions i and j, then call the function again for (i+1, j-1).

## Algorithm:

1. Start

2. Define a recursive function rev(s, i, j).

3. If i >= j, return (stop recursion).

4. Swap characters s[i] and s[j].

5. Call rev(s, i+1, j-1).

6. In main( ), input a string.

7. Call rev(a, 0, a.length()-1) and display result.

8. End

## Conclusion

All three programs demonstrate the power and utility of recursion in C++. Recursion allows a function to solve a problem by breaking it into smaller subproblems and using the call stack to return results. The factorial and sum programs show how recursion can replace iterative loops for mathematical calculations, while the string reversal program illustrates how recursion can process data in reverse order. Each program emphasizes the importance of a base case to terminate recursion and prevent infinite calls. Overall, recursion provides a clean and elegant way to solve problems, although it may use more memory due to multiple function calls.
