def conversion(value):
    """ Function to convert {value} from string to its ASCII code or vice versa """
    return (
        [ord(char) for char in value]
        if type(value) == str
        else "".join([chr(ascii_code) for ascii_code in value])
    )


if __name__ == "__main__":
    print(
        conversion([72, 101, 108, 108, 111, 44, 32, 87, 111, 114, 108, 100, 33])
        == "Hello, World!"
    )  # True
    print(
        conversion([33, 100, 108, 114, 111, 87, 32, 44, 111, 108, 108, 101, 72])
        == "Hello, World!"
    )  # False
    print(
        conversion("Hello, World!")
        == [72, 101, 108, 108, 111, 44, 32, 87, 111, 114, 108, 100, 33]
    )  # True
    print(
        conversion("Hello, World!")
        == [33, 100, 108, 114, 111, 87, 32, 44, 111, 108, 108, 101, 72]
    )  # False
