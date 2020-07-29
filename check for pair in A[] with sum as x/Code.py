n=int(input("Enter the array size - "))
a=list(map(int,input("Enter the elements - ").split()))
sum=int(input("Enter the sum - "))
s=set()
for i in range(n):
    t=sum-a[i]
    if(t in s):
        print(a[i],t,sep='+',end="=")
        print(sum)
        exit(0)
    s.add(a[i])
print("Pair is not found")
