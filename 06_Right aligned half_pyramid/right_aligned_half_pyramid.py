row = int(input("Enter Rows: "))
itr = row-1

for i in range(0, row):
    # For printing " "
    for j in range(0,itr):
        print(" ",end=" ")

    # For printing "*"
    for k in range(0,i+1):
        print("*",end=" ")
    
    itr = itr-1
    print("")

'''        
OUTPUT:

        * 
      * *
    * * *
  * * * *
* * * * *

'''