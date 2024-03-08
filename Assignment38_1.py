# 1.Write a program which accept one number from user and off 7th bit of that 
# number if it is on. Return modified number.

class BitOprations:
    
    iValue = None
    iResult = None
    iMask = None
    
    def __init__(self,iValue):
        self.iValue = iValue
        self.iMask = 0X00000040
        self.iResult = 0
    
    def OffBit(self):
        
        self.iResult = self.iValue & self.iMask
        
        if(self.iResult == self.iMask):
            return (self.iValue ^ self.iMask)
        else:
            return (self.iValue)
    

def main():
    
    iNo = 0
    iRet = 0
    
    print("Enter the Number Here : ")
    iNo = int(input())
    
    Obj = BitOprations(iNo)
    iRet = Obj.OffBit()
    
    if(iRet == iNo):
        print("The 7th are already off...")
        print("Number is : ",iRet)
    else:
        print("The Modified number is : ",iRet)
    
    
if __name__=="__main__":
    main()