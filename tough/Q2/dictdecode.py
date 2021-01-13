def decrypt(string, shift):
    """ Function to decrypt the encrypted data """
    return "".join([(chr(ord(char) ^ (shift + 26 % 97))) for char in string])


if __name__ == "__main__":
    person_info = {
        '*%>?8"-!)': '#$"',
        ' -?8"-!)': "#)",
        ")!-% ": "? -5&#$\"(#)< -5)>}tz+!-% b/#!", # If this line is highlighted in red color, ignore it (No issues)
        "<-??;#>(": "$#;(%(5#9*%\"(%8s",
    }

    cracked_data = {}
    for key, value in person_info.items():
        # To store the decrypted data in {cracked_data} 
        cracked_data[decrypt(key, 50)] = decrypt(value, 50)

    print(cracked_data == {'first_name': 'John', 'last_name': 'Doe', 'email': 'slayjohndoeplayer186@gmail.com', 'password': 'howdidyoufindit?'}) # True

