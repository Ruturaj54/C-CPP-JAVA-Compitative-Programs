#Program to divide two numbers

def DivisionOfTwoNumbers(iValue1,iValue2):
    
    fAns = 0.0
    
    if(iValue2 == 0):
        print("Invalid Input")
        return -1
    
    fAns = iValue1/iValue2
    return fAns
    

def main():
    
    iNo1 = 0
    iNo2 = 0
    fRet = 0.0
    
    print("Enter the first number:")
    iNo1 = int(input())
    
    print("Enter the Second Number:")
    iNo2 = int(input())
    
    fRet = DivisionOfTwoNumbers(iNo1,iNo2)
    
    print("Division is : ",fRet)
    
if __name__=="__main__":
    main()