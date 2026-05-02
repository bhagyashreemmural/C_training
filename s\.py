num = int(input("enter a number"))
for i in range(num):
    for j in range(num):
        if i==0 or i==num-1 or i==2:
            print("#",end=(" "))
        elif i<num//2 and j==0:
            print("#",end=" ")
        elif i>num//2 and j==num-1:
            print("#",end=" ")
        else:
            print(" ",end=" ")
    print()