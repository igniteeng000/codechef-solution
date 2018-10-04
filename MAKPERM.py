def MAKPERM():
    t=input()
    store=[]
    for i in range(0,t):
        n=input()
        inp=[0]*n
        counter=[0]*n
        count=0
        ram=raw_input()
        inp=ram.split()
        for j in range(n):
            if ((int)(inp[j]))<=n:
                counter[((int)(inp[j])-1)]+=1
            else:
                count+=1
        for j in counter:
            if j>1:
                count+=(j-1)
        store.append(count)
    for i in store:
        print i
MAKPERM();
