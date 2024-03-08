#2. Write a program which checks whether 5th & 18th bit is On or OFF. 

class BitOpration:
    
    iValue = None
    iMask = None
    iResult = None
    
    def __init__(self,iValue):
        self.iValue = iValue
        self.iMask = 0X00020010
        self.iResult = 0
    
    def ChkBit(self):
        self.iResult = self.iValue & self.iMask
        
        if(self.iResult == self.iMask):
            return True
        else:
            return False
        
        

def main():
    
    bRet = None
     
    print("Enter the Number : ")
    iNo = int(input())
    
    Obj = BitOpration(iNo)
    bRet = Obj.ChkBit()
    
    if(bRet == True):
        print("The 5th and 18th Bit are ON...")
    else:
        print("The 5th and 18th Bits are OFF...")
    
    

if __name__=="__main__":
    main()