print("Hello World")
date()
print(mean(1:5))
x <- 1
x
apple <-c('red','green',"yellow")
print(apple)
print(class(apple))
list1 <-list(c(2,5,3),21.3,sin)
M = matrix(c('a','a','b','c','b','a'),nrow=2,ncol=3,byrow =TRUE)  

# Create a vector.
apple_colors <-c('green','green','yellow','red','red','red','green')
# Create a factor object.
factor_apple <-factor(apple_colors)
# Print the factor.
print(factor_apple)
print(nlevels(factor_apple))

# Create the data frame.
BMI <-data.frame(gender =c("Male","Male","Female"),
                 height =c(152,171.5,165),
                 weight =c(81,93,78),
                 age=c(42,38,26))
print(BMI)

var_x <-"Hello"
cat("The class of var_x is ",class(var_x),"\n")
var_x <-34.5
cat("Now the class of var_x is ",class(var_x),"\n")
var_x <-27L
cat(" Next the class of var_x becomes ",class(var_x),"\n")


v <-c(2,5.5,6)
t <-c(8,3,4)
print(v+t)
print(v-t)
print(v*t)
print(v/t)
print(v%%t) # Give the remainder of the first vector with the second
print(v%/%t) # Give the result of division of first vector with second (quotient)
print(v^t) # The first vector raised to the exponent of second vector


v <-c(2,5.5,6)
t <-c(8,3,4)
print(v>t)
print(v<t)
print(v==t)
print(v<=t)
print(v>=t)
print(v!=t)

v <-c(2,5.5,6)
t <<-c(8,3,4)
u = c(18,13,14)
print(v)
print(t)
print(u)

c(2,5.5,6) -> v
c(8,3,4) ->> t
print(v)
print(t)

v <-2:8
print(v)

v1 <-8
v2 <-12
t <-1:10
print(v1 %in% t)
print(v2 %in% t)