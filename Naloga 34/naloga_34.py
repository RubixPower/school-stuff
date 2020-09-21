def naloga_34():
    while True:
        znak = input("vpisi znak: ")
        if znak == "&":
            break
        elif znak.islower():
            print(znak)
        else:
            print(ord(znak))
    return
if __name__ == '__main__':
    naloga_34()    
