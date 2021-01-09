def reduce_list(arr):
    return sum(arr) ** 2


if __name__ == "__main__":
    print(reduce_list([1, 2, 3]) == 36)  # True
    print(reduce_list([1, 2, 3, 4]) == 128)  # False
    print(reduce_list([]) == 0)  # True
    print(reduce_list([1, 2, 3, 4, 5, 6, 7]) == 360)  # False
