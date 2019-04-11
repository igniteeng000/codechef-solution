def URCALC():
    ans=0.00000000
    a=(float)(input())
    b=(float)(input())
    operator=raw_input()
    if operator=="+":
        ans=a+b
    elif operator=="-":
        ans=a-b
    elif operator=="*":
        ans=a*b
    else:
        ans=a/b
    print ans
URCALC();


