#Problem Statement:-Accept one number from user and print that number of * on screen

def StarPrinter(iNo):
    
    if(iNo < 0):
        iNo = -iNo
    
    for iCnt in range(iNo):
        print("*")
        
def main():
    iValue = 0
    print("Enter the Number:")
    iValue = int(input())
    
    StarPrinter(iValue)    
if __name__=="__main__":
    main()