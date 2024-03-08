#Accept One Number from user and check wether it is divisible by 5 or not
def ChkDivisibleBy5(iNo):
    
    if(iNo % 5 == 0):
        return "true"
    else:
        return "false"
    
def main():
    
    iValue1 = 0
    bAns = "false"
    
    print("Enter the Number:")
    iValue1 = int(input())
    
    bAns = ChkDivisibleBy5(iValue1)
    
    if(bAns == "true"):
    
        print("Number is Divisible By 5")   
    
    else:
    
        print("Not Divisible By 5")
    

if __name__=="__main__":
    main()