#//Accept two numbers from user an display first number in second number of times

def Display(iNo1,iNo2):
  
  print("Output is:")
  for i in range (iNo2):
    print(iNo1)
    
def main():
  
  iValue1 = 0
  iValue2 = 0
  
  print("Enter the First Number:")
  iValue1 = int(input())
  
  print("Enter the Second Number:")
  iValue2 = int(input())
  
  Display(iValue1,iValue2)
  
  
if __name__=="__main__":
  main()