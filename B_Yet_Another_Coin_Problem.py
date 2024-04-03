num=int(input())
for i in range(num):
    n=int(input())
    #1 3 6 10 15
    count=0
    
    while n>0:
        #print(n,count)
        if n>30:
            
            count+=n//15-1
            n=(n%15)+15

        elif n>15 or n==15:
                if n==20 or n==23 or n==26:
                    count+=n//10
                    n=n%10
                    
                else:
                    count+=n//15
                    n=n%15
                    
        elif n>10 or n==10:
            if n==12:
                count+=n//6
                n=n%6
                
            else:
                count+=n//10
                n=n%10
                
        elif n>6 or n==6:
            count+=n//6
            n=n%6
            
        elif n>3 or n==3:
            count+=n//3
            n=n%3
            
        else:
            count+=n
            break
            

        
        
    print(count)