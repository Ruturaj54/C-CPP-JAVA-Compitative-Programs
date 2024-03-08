#//Accept on number from user if number is less than 10 then print " HEllo"otherwise print "Demo"

def Display(iNo):
  if(iNo < 10):
    print("Hello");
  else:
    print("Demo")
    
    
def main():
  
  iValue = 0
  
  print("Enter the Number:")
  iValue = int(input())
  
  Display(iValue)
  
if __name__=="__main__":
  main()