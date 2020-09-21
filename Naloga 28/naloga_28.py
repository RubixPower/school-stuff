def naloga_28():
    stevec = 1
    vsota = 0
    stevec_stevilo = [0,0] # stevec, stevilo
    while True:
        stevilo = int(input("vnesi stevilo: "))
        if stevilo == 0:
            break
        elif int(stevilo) > stevec_stevilo[1]:
            stevec_stevilo = [stevec, stevilo]
        vsota += stevilo
        stevec += 1
    print(f"najvecje stevilo je: {stevec_stevilo[1]}, ki je bilo {stevec_stevilo[0]} po vrsti")
    print(f"vsota je: {vsota}")
    return
if __name__ == '__main__':
    naloga_28()
