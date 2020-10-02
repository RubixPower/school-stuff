def naloga_35():
    a = int(input("vnesi dolzino stranice a"))
    b = int(input("vnesi dolzino stranice b"))
    kvadrat = [["*" for i in range(a)] for i in range(b)]
    for vrsta in kvadrat:
        print(''.join(vrsta))
    return

if __name__ == '__main__':
    naloga_35()
