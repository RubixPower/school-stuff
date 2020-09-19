def naloga_18():
    def deljivost(x, y):
        if x % y == 0:
            return True
    for stevilo in range(1, 300):
        if deljivost(stevilo, 2):
            print(stevilo)
            continue
        if deljivost(stevilo, 7):
            print(stevilo)

if __name__ == '__main__':
    naloga_18()