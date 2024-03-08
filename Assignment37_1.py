#1.Write a program in C++ which checks whether 15th bit is On or OFF. 

class BitOpr:
    
    iValue = None
    iMask = None
    iResult = None
    
    def __init__(self,iValue):
        self.iValue = iValue
        self.iMask = 0X00004000
        self.iResult = 0
    
    def ChkBit(self):
        
        self.iResult = self.iValue & self.iMask
        
        if(self.iResult == self.iMask):
            return True
        else:
            return False
            
                  

def main():
    
    iNo = 0
    bRet = None
    
    print("Enter the Number Here : ")
    iNo = int(input())
    
    obj = BitOpr(iNo)
    bRet = obj.ChkBit()
    
    if(bRet == True):
        print("The 15th Bit is ON...")
    else:
        print("15th Bit is OFF...")
        
       


if __name__=="__main__":
    main()