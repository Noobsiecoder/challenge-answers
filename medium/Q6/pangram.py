import string


def pangram(string_value):
    """ Function to check if a string is a pangram """

    """ We check if it's greater than all letters in lowercase because the the string {string_value} may contain spaces, period(.) and also punctuation """
    return set(string_value.lower()) >= set(string.ascii_lowercase)


if __name__ == "__main__":
    print(pangram("The quick brown fox jumps over the lazy dog."))  # True
    print(pangram("The quick brown fox jumps over the lazy cat."))  # False
