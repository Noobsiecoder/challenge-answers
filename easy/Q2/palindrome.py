def check_palindrome(string):
    """ Function to check if the {value} is a palindrome by keeping all letters in lowercase """
    return True if string.lower() == string.lower()[::-1] else False


def check_type(value):
    """ Function to check if the {value} is a string """
    return (
        check_palindrome(value) if type(value) == str else check_palindrome(str(value))
    )


if __name__ == "__main__":
    print(check_type("Madam"))  # True
    print(check_type("Radiator"))  # False
    print(check_type(12421))  # True
    print(check_type(1234))  # False
