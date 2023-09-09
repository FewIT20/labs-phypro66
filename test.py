<<<<<<< HEAD
def caesar_decrypt(encoded_message):
    decrypted_message = ""
    
    for char in encoded_message:
        if char.isalpha():
            if char.isupper():
                decrypted_char = chr(((ord(char) - ord('A') - 5) % 26) + ord('A'))
            else:
                decrypted_char = chr(((ord(char) - ord('a') - 5) % 26) + ord('a'))
        else:
            decrypted_char = char
        
        decrypted_message += decrypted_char
    
    return decrypted_message

# Example usage
encoded_letter = "Hello world"
decoded_letter = caesar_decrypt(encoded_letter)
print("Decoded letter:", decoded_letter)
=======
for _ in range(1, 6):
    print(_, end="-")

>>>>>>> 68746acc144a4060f14fa1af31da78017e24c641
