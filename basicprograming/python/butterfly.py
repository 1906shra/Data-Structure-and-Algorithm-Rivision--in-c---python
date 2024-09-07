n = int(input("Enter the number: "))

# First part (upper half of the butterfly)
for i in range(1, n + 1):
    # First set of stars
    print('*' * i, end='')

    # Spaces in the middle
    space = 2 * n - 2 * i
    print(' ' * space, end='')

    # Second set of stars
    print('*' * i)

# Second part (lower half of the butterfly)
for i in range(n, 0, -1):
    # First set of stars
    print('*' * i, end='')

    # Spaces in the middle
    space = 2 * n - 2 * i
    print(' ' * space, end='')

    # Second set of stars
    print('*' * i)
