def naloga_19():
    def deljivost(x, y):
        if x % y == 0:
            return True
    for stevilo in range(1, 500):
        if deljivost(stevilo, 4):
            if not deljivost(stevilo, 10):
                print(stevilo)

if __name__ == '__main__':
    naloga_19()