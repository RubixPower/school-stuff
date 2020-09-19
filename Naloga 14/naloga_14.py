def naloga_13():
    besedilo = input("vpisi besedilo: ")
    dolzina = len(besedilo)
    if dolzina > 2:
        stevec = 2
        while stevec < dolzina:
            print(besedilo[stevec])
            stevec = stevec + 3

if __name__ == '__main__':
    naloga_13()