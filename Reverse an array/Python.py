n=int(input("Enter the array size - "))
a=list(map(int,input("Enter the elements - ").split()))
start=0
end=n-1
while(start<end):
    a[start],a[end]=a[end],a[start]
    start+=1
    end-=1 
print("Reversed array -",end=" ")
for i in range(n):
    print(a[i],end=" ")
