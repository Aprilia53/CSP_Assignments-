user = int(input("give me a number\n"))
user1 = input("give me a short word\n")
user2 = input("give me another short word\n") 

three = user1 + user2 

for i in range(1, user + 1):
    if i % 3 == 0 and i % 5 == 0:
      print(three)
    elif i % 3 ==0:
        print(user1)
    elif i % 5 ==0:
        print(user2)
    else: 
        print(i) 