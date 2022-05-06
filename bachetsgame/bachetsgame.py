import sys

for line in sys.stdin:
    inp = line.split()
    n = int(inp[0])
    choices = [int(i) for i in inp[2:]]

    #Stan = 1, Ollie = 0

    ans = [None]*n+1
    p = 1
    ans[0] = -1
    while p < n:
        val = ans[p]
        level = 1 # assume losing level
        for c in choices:
            if p < n and p-c > 0 and ans[p-c]==-1:
                level = 1
        ans[p] = level
        p += 1

    print(ans[-1])