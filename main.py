def add_numbers(a, b):
    """Return the sum of two numbers."""
    return a + b


def main():
    print("Welcome to my Python GitHub project!")

    num1 = 10
    num2 = 20

    result = add_numbers(num1, num2)

    print(f"First number: {num1}")
    print(f"Second number: {num2}")
    print(f"Sum: {result}")

    if result > 0:
        print("The result is a positive number.")

    print("Program finished successfully.")


if __name__ == "__main__":
    main()

