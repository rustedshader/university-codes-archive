try:
    with open("test.txt", "r") as f:
        try:
            f.write()
            f.readlines() 
        except FileExistsError as e:
            print('Error',e)
except FileNotFoundError as e:
    print('Error',e)
