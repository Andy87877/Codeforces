def process_commands(n, m, a, s):
    result = []

    # Initial product remainder
    product_remainder = 1
    for num in a:
        product_remainder = (product_remainder * num) % m
        result.append(product_remainder)

    # Process commands
    for i in range(n):
        if s[i] == 'L':
            product_remainder = (product_remainder * a[i]) % m
            a.pop(i)
        elif s[i] == 'R':
            product_remainder = (product_remainder * a[n - 1 - i]) % m
            a.pop(n - 1 - i)

        # Output the current product remainder
        print(product_remainder, end=" ")

# Input reading
t = int(input())
for _ in range(t):
    n, m = map(int, input().split())
    a = list(map(int, input().split()))
    s = input()
    
    # Process commands for the current test case
    process_commands(n, m, a, s)
    print()  # Add a newline after each test case output
