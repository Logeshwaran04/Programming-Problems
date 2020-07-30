#Only one number will occur odd number of times
n=int(input("Enter the array size - "))
a=list(map(int,input("Enter the elements - ").split()))
t=0
for i in range(n):
    t=t^a[i]
print(t,"is Occuring odd number of times")
