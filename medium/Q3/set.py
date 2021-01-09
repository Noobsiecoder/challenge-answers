def arr_function(arr1, arr2):
    """ Function to return the union and intersection between two arrays """
    return arr1 + arr2, [num for num in arr1 if num in arr2]


if __name__ == "__main__":
    print(
        arr_function([1, 2, 3, 4], [5, 4, 7, 8]) == ([1, 2, 3, 4, 5, 4, 7, 8], [4])
    )  # True
    print(
        arr_function([1, 2, 3], [5, 7, 8]) == ([1, 2, 3, 4, 5, 4, 7, 8], [1, 2, 3])
    )  # False
    print(arr_function([], [5, 7, 8]) == ([5, 7, 8], []))  # True
    print(arr_function([1, 2, 3, 4], [5, 7, 8]) == ([5, 7, 8], []))  # False
