list1 = list(map(int, input("Enter sorted list1: ").split()))
list2 = list(map(int, input("Enter sorted list2: ").split()))

merged = []
i = j = 0

while i < len(list1) and j < len(list2):
    if list1[i] < list2[j]:
        merged.append(list1[i])
        i += 1
    else:
        merged.append(list2[j])
        j += 1

merged.extend(list1[i:])
merged.extend(list2[j:])

print("Merged list:", merged)
