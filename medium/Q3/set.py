def arr_function(arr1, arr2):
    """ Function to return the union and intersection between two arrays """
    return list(set((arr1) + (arr2))), (
        list(set([num for num in arr1 if num in arr2]))
        if len(arr1) != 0 and len(arr2) != 0
        else []
    )


if __name__ == "__main__":
    print(
        (arr_function([1, 2, 3, 4], [5, 4, 7, 8])) == ([1, 2, 3, 4, 5, 7, 8], [4])
    )  # True
    print((arr_function([], [5, 4, 7, 8])) == ([8, 4, 5, 7], []))  # True