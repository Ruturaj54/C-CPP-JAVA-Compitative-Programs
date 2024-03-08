def DisplayStar(iValue):
    if(iValue < 0):
        iValue = -iValue
    
    for i in range(iValue):
        print("*")
        

def main():
    
    iNo = 0
    print("Enter the Number:")
    iNo = int(input())
    
    DisplayStar(iNo)
    
    
if __name__=="__main__":
    main()