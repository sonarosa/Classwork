#Qn1:Data types and manipulation
#Develop a program to read a a paragraph of text and perform:
#a.Count the total number of words
#b.Calculate the average word length
#c.IDENTIFY AND PRINT THE LONGEST WORD.
#D.Replace all occurences of a specific word with another word of your choice.

# Read the content of the file
file_path <- "C:/Users/cusat/Desktop/R programs/readline.txt"
my_text <- readLines(file_path)

# Remove leading and trailing white space
my_text <- trimws(my_text)

#print the paragraph
print(paste(my_text))

#count the number of words
number_of_words=lengths(gregexpr("\\w+", my_text))
print(paste("Number of words in a paragraph:",number_of_words))

#count the number of letters
number_of_letters=nchar(my_text)
print(paste("Number of letters in a paragraph:",number_of_letters))

#average word length
length_words = 0
total_words = 0
words = my_text

for x in words:
  length_words += len(x)
total_words += 1

average = length_words / total_words 

print(paste("Average word length:",average))