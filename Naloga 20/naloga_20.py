def naloga_20():
    stevilo = str()  # samo da obstaja
    while True:
        stevilo = (input())
        if stevilo == "d":
            break
        if int(stevilo) % 2 == 0:
            print("sodo")
        else:
            print("liho")
if __name__ == '__main__':
    naloga_20()