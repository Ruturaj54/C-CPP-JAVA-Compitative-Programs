#Program to print 5 to 1 numbers on screen

def Display():
    iCnt = 0
    
    for iCnt in range(5,0,-1):
        print(iCnt)
        
def main():
    
    Display()

        
if __name__=="__main__":
    main()