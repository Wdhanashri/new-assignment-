def count_vowels_and_consonants(word):
    vowels = "aeiouAEIOU"
    vowel_count = 0
    consonant_count = 0
   for char in word:
        if char.isalpha():  # Check if the character is a letter
            if char in vowels:
                vowel_count += 1
            else:
                consonant_count += 1
   return vowel_count, consonant_count
word = input("Enter a word: ")
vowels, consonants = count_vowels_and_consonants(word)
print(f"Number of vowels: {vowels}")
print(f"Number of consonants: {consonants}")
