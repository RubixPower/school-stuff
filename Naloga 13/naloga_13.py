def naloga_13():
    besedilo = input("vpisi besedilo")
    # vsak znak v novi vrstici
    for crka in besedilo:
        print(crka)
    print("-----------")
    # izpisi obratno
    for crka in reversed(besedilo):
        print(crka)

if __name__ == '__main__':
    naloga_13()