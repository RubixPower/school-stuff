def izr_vsoto(str_stevilo):
    return sum([int(i) for i in str_stevilo])

def naloga_26():
    vsota = 0
    for i in range(2):
        vsota += izr_vsoto(input("vpisi stevilo: "))
    print(f"vsota stevk obeh stevil je: {vsota}")
    return

if __name__ == '__main__':
    naloga_26()
