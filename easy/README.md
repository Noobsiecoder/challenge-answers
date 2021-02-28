# Easy Level Questions
---
## 1. Write a program to reserve a given string and a number
_Contraints_ :-
**_1 < number < 10000_**
```python
# Python
def reverse(value):
	""" Function to reverse the value after checking the datatype of {value} """
	# Enter code here
	pass
```

```js
// JavaScript
function reverse(value) {
	// Function to reverse the {value}
	// Enter code here
}
```

```cpp
// C++
std::string reverse_string(std::string value) 
{
	// Function to reverse a string
	// Enter code here
}

int reverse_num(int value) 
{
	// Function to reverse a number
	// Enter code here
}
```

```
Example -

Input:
	Hello, World!
	1234
Output:
	!dlroW ,olleH
	4321
```

## 2. Write a program to check if a given string and a number is a palindrome
_Contraints_ :-
**_1 < number < 10000_**

_Meaning_ :-
- A **palindrome** is a word, number, phrase, or other sequence of characters which reads the same backward as forward, such as **madam** or **racecar**. 
- There are also numeric **palindromes**, including date/time stamps using short digits **11/11/11 11:11** and long digits **02/02/2020**.
```python
# Python
def is_palindrome(value):
	""" Function to check if the {value} is a palindrome """
	# Enter code here
	pass
```

```js
// JavaScript
function isPalindrome(value) {
	// Function to check if {value} is palindrome
	// Enter code here
}
```

```cpp
// C++
bool palindrome_string(std::string value) 
{
	// Function to check if {value}(i.e: string) is palindrome
	// Enter code here
}

bool palindrome_num(int value) 
{
	// Function to check if {value}(i.e: number) is palindrome
	// Enter code here
}
```

```
Example -

Input:
	Madam
	Car
	1234321
	1234
Output:
	True
	False
	True
	False
```

## 3. Write a program to check if a given string and a number is an anagram
_Contraints_ :-
**_1 < number < 10000_**

_Meaning_ :-
- An **anagram** is a word or phrase formed by rearranging the letters of a different word or phrase, typically using all the original letters exactly once.
- Example - 
	1. Fried -> Fired
	2. Listen -> Silent
	3. Race -> Care
	4. Part -> Trap
```python
# Python
def is_anagram(value, check_value):
	""" Function to check if the {value} is an anagram with {check_value} """
	# Enter code here
	pass
```

```js
// JavaScript
function isAnagram(value, check_value) {
	// Function to check if the {value} is an anagram with {check_value}
	// Enter code here
}
```

```cpp
// C++
bool anagram_string(std::string value, std::string check_value) 
{
	// Function to check if the {value} is an anagram with {check_value}
	// Enter code here
}

bool anagram_num(int value, int check_value) 
{
	// Function to check if the {value} is an anagram with {check_value}
	// Enter code here
}
```

```
Example -

Input:
	(maMba,bamam)
	(maMba, memba)
	(1234, 1423)
	(1234, 2512)
Output:
	True
	False
	True
	False
```

## 4. Write a program to check if a given string and a number is an isogram
_Contraints_ :-
**_1 < number < 10000_**

_Meaning_ :-
- An **isogram** is a word with no repeating letters
- Example - 
	1. Brief -> No repeating letters present
	2. Possible -> Repeating letters present
	3. 1234 -> Unique numbers
	4. 1000 -> No unique numbers
```python
# Python
def is_isogram(value):
	""" Function to check if the {value} is an isogram """
	# Enter code here
	pass
```

```js
// JavaScript
function isIsogram(value) {
	// Function to check if the {value} is an isogram
	// Enter code here
}
```

```cpp
// C++
bool isogram_string(std::string value) 
{
	// Function to check if the {value} is an isogram
	// Enter code here
}

bool isogram_num(int value) 
{
	// Function to check if the {value} is an isogram
	// Enter code here
}
```

```
Example -

Input:
	Hey
	moOse
	1234
	1000
Output:
	True
	False
	True
	False
```

## 5. Write a program to display _n_ numbers in a fibonacci series
_Contraints_ :-
**_1 < number < 100_**

```python
# Python
def fibonacci_series(size):
	""" Function to store fibonacci series in a list """
	# Enter code here
	pass
```

```js
// JavaScript
function fibonacci_series(size) {
	// Function to store fibonacci series in an array upto {size} given
	// Enter code here
}
```

```cpp
// C++
void fibonacci_series(int arr[], int size)
{
	// Function to calculate the fibonacci series upto {size} given
	// Enter code here
}
```

```
Example -

Input:
	5
	12
Output:
	[0, 1, 1, 2, 3]
	[0, 1, 1, 2, 3, 5, 8, 13, 21, 34, 55, 89]
```

## 6. Write a program to convert *ASCII* code to string and vice versa

```python
# Python
def ascii_conversion(value, check_value):
	""" Function to convert {value} from string to its ASCII code or vice versa and check with {check_value} """
	# Enter code here
	pass
```

```js
// JavaScript
function ascii_conversion(value, checkValue) {
	// Function to convert {value} from string to its ASCII code or vice versa and check with {checkValue}
	// Enter code here
}
```

```cpp
// C++
void ascii_to_string(int arr[], std::string &string, int size, std::string check_string) 
{
	// Function to convert each ASCII value to corresponding string and check with {check_string}
	// Enter code here
}

void string_to_ascii(std::string str, char arr[], int ascii_code[], int size, int check_ascii_code[])
{
	// Function to convert String to corresponding ASCII values and check with {check_ascii_code}
	// Enter code here
}
```

```
Example -

Input:
	[72, 101, 108, 108, 111, 44, 32, 87, 111, 114, 108, 100, 33]
	Hello, World!
Output:
	Hello, World!
	[72, 101, 108, 108, 111, 44, 32, 87, 111, 114, 108, 100, 33]
```
