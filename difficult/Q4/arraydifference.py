def array_difference(list1, list2):
    """ Function to return a list of elements from {list1} that aren't in {list2} """
    return [num for num in list1 if num not in list2]


print(array_difference([1, 2], [2]) == [1]) # True
print(array_difference([1, 2, 3], [1, 8, 3]) == [2]) # True
print(array_difference([], [3, 4]) == []) # True
#
