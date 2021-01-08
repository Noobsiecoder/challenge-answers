def reverse(value):
    ''' Function to reverse the value after checking the datatype of {value} '''
    return value[::-1] if type(value) == str else str(value)[::-1]


if __name__ == "__main__":
    print(reverse("Hello, World"))  # dlroW ,olleH
    print(reverse(1234))  # 4321
