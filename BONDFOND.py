import sys

t = int(input())

while t is not 0:
    n = int(input())

    i=0
    while (2**i)<n :
        i+=1

    diff = (2**i)-n
    if diff>(n-(2**(i-1))) :
        diff = (n-(2**(i-1)))

    print(diff)
    t-=1
