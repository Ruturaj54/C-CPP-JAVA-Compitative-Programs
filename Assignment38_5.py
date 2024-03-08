# 5. Write a program which accept one number from user and on its first 4 
# bits. Return modified number.


class BitOpeartion:
    iValue = None
    iMask = None
    iResult = None
    
    def __init__(self,iValue):
        self.iValue = iValue
        self.iMask = 0X0000000f
        self.iResult = 0

    def ToggleBit(self):
        
        self.iResult = self.iValue & self.iMask
        
        if(self.iResult == self.iMask):
            return (self.iValue ^ self.iMask)
        else:
            return (self.iValue ^ self.iMask)

def main():
    iNo = 0
    iRet = 0
    
    print("Enter the Number Here : ")
    iNo = int(input())
    
    Obj = BitOpeartion(iNo)
    
    iRet = Obj.ToggleBit()
    
    print("The Modified Number after Toggling Bit is : ",iRet)
    
if __name__=="__main__":
    main()