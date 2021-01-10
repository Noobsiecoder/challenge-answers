def array_to_set(arr):
    """ Function to convert an array to set """
    return set(arr)

if __name__ == "__main__":
    print(array_to_set([1, 2, 3, 4, 5, 2, 4, 1, 3, 2, 5]) == {1, 2, 3, 4, 5}) # True