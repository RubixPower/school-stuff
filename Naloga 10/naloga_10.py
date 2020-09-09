def naloga_10():
    vsota = 0
    while True:
        stevilo = int(input("vnesi stevilo: "))
        if stevilo  == 0:
            print(vsota)
            return
        elif stevilo > 33:
            vsota += stevilo
        else:
            continue
    return

if __name__ == '__main__':
    naloga_10()