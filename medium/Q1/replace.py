import collections


def replace_string(string):
    """ Function to replace characters that repeat more than once """
    string = string.lower()
    new_dict = dict(
        collections.Counter(string)
    )  # Counter method counts the number of occurence of each character
    for char in string:
        if new_dict[char] > 1:
            string = string.replace(char, "*")
    return string


if __name__ == "__main__":
    # Test cases
    print(replace_string("Missisippi") == ("m*********"))  # True
    print(replace_string("Computer") == ("C*mp*t*r"))  # False
    print(replace_string("MisSisIppi") == ("m*********"))  # True
    print(
        replace_string("Hello, World! I love C++") == ("h*ll*,*w*rld!*i***v**c**")
    )  # False
