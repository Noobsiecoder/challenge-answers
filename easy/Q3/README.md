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
