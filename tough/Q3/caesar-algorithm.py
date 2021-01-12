# Function to encrypt string {string} using caesar encryption
def encrypt(string, shift):
    encrypted_string = ""  # To store the encrypted string
    for char in string:
        if char == " ":
            # Checking if the character is a whitespace
            encrypted_string += char
        elif char.isupper():
            # Checking if the character is Uppercase
            encrypted_string += chr((ord(char) + shift - 65) % 26 + 65)
        else:
            encrypted_string += chr((ord(char) + shift - 97) % 26 + 97)
    return encrypted_string


# Function to decrypt string {string} using caesar encryption
def decrypt(string, shift):
    decrypted_string = ""  # To store the decrypted string
    for char in string:
        if char == " ":
            # Checking if the character is a whitespace
            decrypted_string += char
        elif char.isupper():
            # Checking if the character is Uppercase
            decrypted_string += chr((ord(char) - shift - 65) % 26 + 65)
        else:
            decrypted_string += chr((ord(char) - shift - 97) % 26 + 97)
    return decrypted_string


if __name__ == "__main__":
    print(
        encrypt("The quick brown fox jumped over the lazy dog", 25)
        == "Sgd pthbj aqnvm enw itlodc nudq sgd kzyx cnf"
    )  # True
    print(
        decrypt("Sgd pthbj aqnvm enw itlodc nudq sgd kzyx cnf", 25)
        == "The quick brown fox jumped over the lazy dog"
    )  # True