import string


def break_list(str_len, digit, test_str):
    """ Function to break list according to the given algorithm """

    if int(digit) == 0:
        # If digit is zero, only consider list as from index {0} to half of {test_str} length
        test_str = test_str[:str_len]
    else:
        # Else consider list as from index half of {test_str} length till its end
        test_str = test_str[str_len:]
    return test_str


def encoder(str_len, test_string):
    """ Function to convert encoded binary to string """

    new_list = [] # To store the required elements
    test_string = [
        test_string[i : i + 4] for i in range(0, str_len, 4)
    ]  # Placing 4 bits of binary separately
    for binary in test_string:
        test_str = string.ascii_lowercase[:16]
        pivot = 8  # Pivot used for partionioning using the given algorithm
        for digit in binary:
            test_str = break_list(pivot, digit, test_str)
            pivot //= 2
        new_list.append(
            test_str
        )  # Appends the last character which was returned from {break_list} function
    return "".join(
        [*new_list]
    )  # Unpacking all elements from the list {new_list} and then converting to a string with elements joined togther


if __name__ == "__main__":
    print(encoder(4, "1111") == "p")  # True
    print(encoder(8, "00001111") == "ap")  # True
    print(encoder(4, "1001") == "j")  # True
