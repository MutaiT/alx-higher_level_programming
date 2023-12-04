#!/usr/bin/python3
if __name__ == "__main__":
    from sys import argv
    l = len(argv) - 1
    if (l == 1):
        print("{:d} argument:".format(l))
    else:
        print("{:d} arguments{}".format(l, ":" if l != 0 else "."))
    if (l > 0):
        for num in range(1, l + 1):
            print("{:d}: {}".format(num, argv[num]))
