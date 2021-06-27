n=int(input("enter a binary no:"))
base=1
decmal_value=0
while n!=0:
    r=n%10;
    if r!=0 and r!=1:
        print("not valid no...")
        exit()
    decmal_value=decmal_value+(r*base)
    base=base*2
    n=n//10

print("Decimal Value is:",decmal_value)