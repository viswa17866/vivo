def find_duplicates(arr):
    freq = {}  
    for num in arr:
        if num in freq:
            freq[num] += 1
        else:
            freq[num] = 1
    
    print("Duplicate elements:")
    for key, value in freq.items():
        if value > 1:
            print(key)

arr = [1, 2, 3, 2, 4, 5, 1, 6]
find_duplicates(arr)
