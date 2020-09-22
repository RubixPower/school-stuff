def naloga_30():
    x = input("vnesi stevilo")
    y = 0
    if int(x) < 1:
        y = x*10
    else:
        y = int(x)
    print(y)
    return
if __name__ == '__main__':
    naloga_30()
