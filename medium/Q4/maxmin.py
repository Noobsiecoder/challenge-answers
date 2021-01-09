def square(value):
    """ Function to find the square of {value} """
    return value ** 2


def cubic(value):
    """ Function to find the cube of {value} """
    return value ** 3


def max_min(arr):
    """ Function to return the maximum and minimum value with its square and cubic value """
    return square(max(arr)), square(min(arr)), cubic(max(arr)), cubic(min(arr))


if __name__ == "__main__":
    print(max_min([2, 3, 4, 5, 6]) == (36, 4, 216, 8))  # True
    print(max_min([1, 2, 3, 4, 5, 6]) == (36, 4, 216, 8))  # False
