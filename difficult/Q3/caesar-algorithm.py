def encrypt(string, shift):
    encrypted_string = ""
    for char in string:
        if char == " ":
            encrypted_string += char
        elif char.isupper():
            encrypted_string += chr((ord(char) + shift - 65) % 26 + 65)
        else:
            encrypted_string += chr((ord(char) + shift - 97) % 26 + 97)
    return encrypted_string


def decrypt(string, shift):
    decrypted_string = ""
    for char in string:
        if char == " ":
            decrypted_string += char
        elif char.isupper():
            decrypted_string += chr((ord(char) - shift - 65) % 26 + 65)
        else:
            decrypted_string += chr((ord(char) - shift - 97) % 26 + 97)
    return decrypted_string


print(encrypt("The quick brown fox jumped over the lazy dog", 25))
print(decrypt("Sgd pthbj aqnvm enw itlodc nudq sgd kzyx cnf", 25))