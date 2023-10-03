# Read the content of the file
file_path <- "C:/Users/cusat/Desktop/R programs/readline.txt"
my_text <- readLines(file_path)

# Remove leading and trailing white space
my_text <- trimws(my_text)

# Reverse the content
reverse_text <- rev(unlist(strsplit(my_text, "")))

# Convert the reversed content back to a string
reverse_text <- paste(reverse_text, collapse = "")

# Check if the content is a palindrome
if (my_text == reverse_text) {
  print("The string is palindrome")
} else {
  print("The string is not palindrome")
}
#to find the length of the string
length(strsplit(my_text, " ")[[1]])

#count the number of words
lengths(gregexpr("\\w+", my_text))

#count number of repeated words
lengths(regmatches(x, gregexpr("Malayalam", my_text)))

#count the number of letters
nchar(my_text)