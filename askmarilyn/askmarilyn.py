# https://open.kattis.com/problems/askmarilyn
from sys import stdin

for i in range(1000):
    print('A')
    hint = stdin.readline().strip().split()
    if hint[1]=='1':
        print(hint[0])
    else:
        if hint[0] == 'B':
            print('C')
        if hint[0] == 'C':
            print('B')
    stdin.readline()
