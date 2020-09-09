def naloga_9():
    # deklaracija spremenljivk
    stevilka = int(input("vpisi stevilko: "))
    vsota = 0
    stevec = 0 
    # zanka
    while stevec != stevilka:
        stevec += 1  # stevec (stevec = stevec +1)
        gaus = stevec * (stevec+1) / 2  # Gausov algo.
        print(stevec, gaus, vsota)
        vsota += gaus

    print(vsota)
    return


if __name__ == '__main__':
    naloga_9()
    