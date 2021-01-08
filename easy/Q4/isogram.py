def check_type(value):
    """ Function to check {value}'s datatype """
    return value if type(value) == str else str(value)


def is_isogram(value):
    """ Function to check if {value} is an isogram """
    return sorted(list(set(check_type(value).lower()))) == sorted(
        list(check_type(value).lower())
    )


if __name__ == "__main__":
    print(is_isogram("Hey!"))  # True
    print(is_isogram("moOse"))  # False
    print(is_isogram(1234))  # True
    print(is_isogram(1000))  # False
