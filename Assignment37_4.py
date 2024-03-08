#4. Write a program which checks whether 7th & 8th & 9th bit is On or 
#OFF.

class BitOperations:
    
    iNo = None
    iMask = None
    iResult = None
    
    def __init__(self,iNo):
        self.iNo = iNo
        self.iMask = 0X000001c0
        self.iResult = 0
        
    def ChkBit(self):
        self.iResult = self.iNo & self.iMask
        if(self.iResult == self.iMask):
            return True
        else:
            return False
        

def main():
    
    iValue = 0
    bRet = None
    
    print("Enter the Number : ")
    iValue = int(input())
    
    Obj = BitOperations(iValue)
    bRet = Obj.ChkBit()
    
    if(bRet == True):
        print("The 7th & 8th & 9th bits are ON... ")
        
    else:
        print("The 7th & 8th & 9th bits are OFF... ")
    
    
if __name__=="__main__":
    main()