def fibonacci(size):
    """ Function to store fibonacci series in a list """
    term1 = 0
    term2 = 1
    series = []
    for _ in range(size):
        series.append(term1)
        nth_term = term1 + term2
        term1 = term2
        term2 = nth_term
    return series


if __name__ == "__main__":
    print(fibonacci(5) == [0, 1, 1, 2, 3])  # True
    print(fibonacci(5) == [0, 1, 1, 2, 3, 5, 8])  # False
    print(fibonacci(12) == [0, 1, 1, 2, 3, 5, 8, 13, 21, 34, 55, 89])  # True
    print(fibonacci(12) == [0, 1, 1, 2, 3])  # False