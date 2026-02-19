s = input("Enter string: ").lower()

vowels = 0
consonants = 0

for ch in s:
    if ch in "aeiou":
        vowels += 1
    elif ch.isalpha():
        consonants += 1

print("Vowels:", vowels)
print("Consonants:", consonants)
