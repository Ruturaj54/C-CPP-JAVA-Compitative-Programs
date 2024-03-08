#//Accept the number from user and check it is even or odd

def CheckEvenOdd(iNo):
    
    if(iNo == 0):
        {
            print("Enter value More than 0")
        }
    if(iNo % 2 == 0):
        return True
    else:
        return False
    
def main():
    
    bRet = False
    iValue1 = 0
    print("Enter the number:")
    iValue1 = int(input())
    
    bRet = CheckEvenOdd(iValue1)
    
    if(bRet == True):
        print("It is Even Number")
    else:
        print("It is Odd Number")

if __name__=="__main__":
    main()