def naloga_35():
    stranice = int(input("vnesi dolzino stranice"))
    kvadrat = [["*" for i in range(stranice)] for i in range(stranice)]
    for vrsta in kvadrat:
        print(''.join(vrsta))
    return

if __name__ == '__main__':
    naloga_35()
