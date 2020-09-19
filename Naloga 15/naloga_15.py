def naloga_15():
    for stevec in range(1, 101):
        # (stevec % 2) ti pove ostanek ko deljis stevilo z 0. ker 0 je tudi false pomeni,
        # da moram vrednost negirati
        if not (stevec % 2):
            print(stevec)
if __name__ == '__main__':
    naloga_15()