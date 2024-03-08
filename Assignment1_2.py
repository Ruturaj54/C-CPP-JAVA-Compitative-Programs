#Write a program to print 5 times RRD technologies

def Display():
    iCnt = 0;
    
    for iCnt in range(5):
        print("RRD Technologies..")
        
    
def main():
    iChoice = 0;
    
    print("Do you want to Print RRD Technologies 5 times ?")
    print("1.Yes")
    print("2.No")
    iChoice = int(input())
    
    if(iChoice == 1):
        Display()
    else:
        print("Thank you ....")

    
if __name__=="__main__":
    main()