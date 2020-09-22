def naloga_32():
    stevilo = int(input("stavi stevilo: "))
    for delitelj in range(1, stevilo):
        if not (stevilo % delitelj):
            print(delitelj)
    print(stevilo)
    return
if __name__ == '__main__':
    naloga_32()
