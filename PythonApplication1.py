import time

def bubble_sort(arr):
    swaps = 0
    start = time.time()
    n = len(arr)
    for i in range(n):
        for j in range(0, n - i - 1):
            if arr[j] > arr[j + 1]:
                arr[j], arr[j + 1] = arr[j + 1], arr[j]
                swaps += 1
    end = time.time()
    return arr, (end - start), swaps

def insertion_sort(arr):
    swaps = 0
    start = time.time()
    for i in range(1, len(arr)):
        key_item = arr[i]
        j = i - 1
        while j >= 0 and arr[j] > key_item:
            arr[j + 1] = arr[j]
            j -= 1
            swaps += 1
        arr[j + 1] = key_item
    end = time.time()
    return arr, (end - start), swaps

def selection_sort(arr):
    swaps = 0
    start = time.time()
    n = len(arr)
    for i in range(n):
        min_idx = i
        for j in range(i + 1, n):
            if arr[j] < arr[min_idx]:
                min_idx = j
        arr[i], arr[min_idx] = arr[min_idx], arr[i]
        swaps += 1
    end = time.time()
    return arr, (end - start), swaps

def get_user_input():
    arr = []
    for i in range(10):
        num = int(input(f"Enter element {i+1}: "))
        arr.append(num)
    return arr

def main():
    print("Welcome to the Sorting Program!")
    arr = get_user_input()
    print("\nChoose a sorting method:")
    print("1. Bubble Sort")
    print("2. Insertion Sort")
    print("3. Selection Sort")
    choice = int(input("Enter your choice (1-3): "))

    if choice == 1:
        sorted_arr, time_taken, swaps = bubble_sort(arr)
        print("\nBubble Sort:")
    elif choice == 2:
        sorted_arr, time_taken, swaps = insertion_sort(arr)
        print("\nInsertion Sort:")
    elif choice == 3:
        sorted_arr, time_taken, swaps = selection_sort(arr)
        print("\nSelection Sort:")
    else:
        print("Invalid choice. Exiting the program.")
        return

    print(f"Sorted array: {sorted_arr}")
    print(f"Time taken: {time_taken:.6f} seconds")
    print(f"Number of swaps: {swaps}")

if __name__ == "__main__":
    main()
