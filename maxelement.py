n = int(input("Enter size: "))

arr = []

for i in range(n):
    arr.append(int(input()))

max_element = arr[0]

for num in arr:
    if num > max_element:
        max_element = num

print("Maximum element:", max_element)
