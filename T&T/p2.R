v <- 10L
if (v>0){
  print("pos")
}else{
  print("Neg")
}

num <- as.double(readline(prompt="Enter a number: "))
if(num > 0) {
  print("Positive number")
} else {
  if(num == 0) {
    print("Zero")
  } else {
    print("Negative number")
  }
}

num <- as.double(readline(prompt="Enter a number: "))
if(num %% 4 == 0) {
  if(num %% 100 == 0){
    if(num %% 400 == 0){
      print(paste(num,"is leap yr"))
    }else{
      print(paste(num,"is not leap yr"))
    }
  }else{
    print(paste(num,"is leap yr" ))
  }
} else{
  print(paste(num,"is not leap yr" ))
}

n1 <- as.double(readline(prompt="Enter a number 1: "))
n2 <- as.double(readline(prompt="Enter a number 2: "))
if(n1>n2){
  print(paste(n1,"is greater than ",n2))
}else{
  print(paste(n2,"is greater than ",n1))
}

n <- as.double(readline(prompt="Enter a number "))
x <- n %% 10
y <- n / 100
y = floor(y)
if(x == y){
print(paste(n, "is palindrome"))
}else{
  print(paste(n, "is not palindrome"))
}


a <- as.double(readline(prompt="Enter a sub 1 "))
b <- as.double(readline(prompt="Enter a sub 2 "))
c <- as.double(readline(prompt="Enter a sub 3 "))

x = a+b+c
y = (a+b+c)/3
print(paste(x,"sum",y,"average"))
if(sum >200 && sum <=300){
  print("O grade")
}else if(sum >100 && sum <=200){
  print("E Grade")
}else{
  print("A Grade")
}

h = 6  
w = 7
r = 3
var3 = "s"   
  result = switch(   
    val3,   
    "c"= cat("cir area =", 3.14 * r*r),   
    "r"= cat("ret area =", h * w),   
    "t"= cat("tri area = ", 1/2 * h * w),
  )

h = 6  
w = 7
r = 3
var3 = "s"   
result = switch(   
  val3,   
  "c"= cat("cir area =", 3.14 * r*r),   
  "r"= cat("ret area =", h * w),   
  "t"= cat("tri area = ", 1/2 * h * w),
)



{n <- as.integer(readline(prompt = "ent"))
  i <- 1
  x <- 1
  while (x < n){
    print(i*i)
    i = i + 1
    x = x + 1
  }
}

{i = 1
  ans = 1
  x <- as.double(readline(prompt = "enter val"))
  while(x>0){
    ans = ans * x
    x = x - 1
  }
  print(ans)
}

{i = n
  a = 0
  b = 1
  c = a + b
  x <- as.double(readline(prompt = "enter val"))
  print(a)
  print(b)
  while(c < x){
    print(c)
    a = b
    b = c 
    c = a + b
  }
}

{
  num = as.integer(readline(prompt="Enter a number: "))
  flag = 0
  if(num > 1) {
    flag = 1
    for(i in 2 : (num/2)) {
      if ((num %% i) == 0) {
        flag = 0
        break
      }
    }
  } 
  if(num == 2)    flag = 1
  if(flag == 1) {
    print(paste(num,"prime number"))
  } else {
    print(paste(num," not prime number"))
  }
}

{
  n <- as.integer(readline(prompt = "Enter: "))
  i = 1
  s = 0
  
  while (i < n) {
    if (n %% i == 0) {
      s = s + i
    }
    i = i + 1
  }
  
  if (s == n) {
    print(paste("perfect :",n))
  } else{
    print(paste("not perfect :",n))
  }
}

{
  x <- 0
  sum <- 0
  finsum <-0
  n <- as.integer(readline(prompt = "enter: "))
  for(i in 1:n){
    sum = sum + i*(i+1)/2
  }
  print(paste("sum : ",sum))
}

{
  n <- as.double(readline(prompt = "ent: "))
  rev = 0
  while(n > 0){
    rev = rev*10 + (n %% 10)
    n = n %/% 10
  }
  print(paste("reverse : ",rev))
}

{
  n <- as.double(readline(prompt = "ent: "))
  rem = n
  arm = 0
  while(n > 0){
    x = n%%10
    arm = arm + x*x*x
    n = n %/% 10
  }
  if(arm == rem) print(paste("armstrong : ",rem))
  else print(paste("not armstrong"))
}

{
  n <- as.double(readline(prompt = "ent: "))
  for(i in 1:n){
    if(i%%2 == 0){
      for(j in i:1){
        cat(paste(j,' '))
      }
      cat("\n")
    }else{
      for(j in 1:i){
        cat(paste(j,' '))
      }
      cat("\n")
    }
  }
}
