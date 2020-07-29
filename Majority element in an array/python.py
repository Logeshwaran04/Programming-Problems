#Moore's Voting Algorithm
n=int(input("Enter the size of array - "))
a=list(map(int,input("Enter the elements - ").split()))
max_i=0
count=1
for i in range(1,n):
    if(a[max_i]==a[i]):
        count+=1 
    else:
        count-=1 
    if(count==0):
        max_i=i 
        count=1
count=0
for i in range(n):
    if(a[max_i]==a[i]):
        count+=1 
    if(count>n//2):
        print("Majority element =",a[max_i])
        exit(0)
print("No Majority element")
