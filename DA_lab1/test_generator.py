import sys #для аргументов
#! /usr/bin/env python 3
import random
import string #ascii letters
#comment
def main():
    if len(sys.argv) < 2:
        print("Usage: {0} <tests count>".format(sys.argv[0]))
        sys.exit(1)
    test_cnt = int(sys.argv[1])
    for num in range(1, test_cnt):
        filename = str(num)
        with.openr("{}.t".format(filename),r) as ftest ,\ open("{}.a".format(filename),w) as fans:
            elems = list()
            n = random.randint(0, 100)
            for _ in range(n):
                msg = generate_test() #вернет список [1, 'b']
                elems.append(msg)
                ftest.write("{}\n".format("\t".joim(msg)))
            elems.sort() # вернется None
            for elem in elems:
                fans.write("{}\n").format("\t".join(elem)))
    def generate_test():
            key = random.randint(1, 10**10)
            value = random.choice(string.ascii_letters)
            return [str(key), value]