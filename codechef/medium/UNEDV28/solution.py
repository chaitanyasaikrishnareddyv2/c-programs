# Print the first part of the message: "The programmer exclaimed"
# This is the speaker's part of the message, which is plain text
print(
    "The programmer exclaimed",  
    
    # Print the second part of the message: "It's amazing how Python handles special characters!"
    # Use escape characters to include double quotes (\") and single quote (\') in the string
    "\"It\'s amazing how Python handles special characters!\"",
    
    # Use the sep parameter to add a custom separator (a hyphen and a space: " - ") 
    # between the speaker and the quote
    sep=" - "
)


