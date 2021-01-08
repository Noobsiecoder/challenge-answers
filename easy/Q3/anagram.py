def checkType(value):
    """ Function to check {value}'s data-type  """
    return value.lower() if type(value) == str else str(value).lower()


def is_anagram(value):
    """ Function to check {value} is anagram """
    return "".join(sorted(list(checkType(value))))


if __name__ == "__main__":
    print(is_anagram("maMba") == is_anagram("bamam"))  # True
    print(is_anagram("maMba") == is_anagram("memba"))  # False
    print(is_anagram(1234) == is_anagram(1423))  # True
    print(is_anagram(1234) == is_anagram(2315))  # Flase