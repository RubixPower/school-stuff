def naloga_36():
    stevilo = int(input("vnesi stevilo"))
    stevila = [i for i in range(10, 0, -1)]
    stevila.reverse()
    while (len(stevila)):
        print(''.join(map(str, stevila)))
        stevila.pop(-1)

if __name__ == '__main__':
    naloga_36()
