
# Word Cloud Generator

### • TASK 

⇨ You need to build a Word Cloud Generator. The generator takes in a dynamic
collection of documents (i.e., new documents keep coming in) and creates a
word cloud based on the frequency of unique words in the document. The
generator starts with an initial collection of N documents. You can control the
generator to only the top k most frequently used words. You should also be able
to stop the generator from selecting a pre-defined set of words W.

### • OUR APPROACH
⇨ We have build a Word Cloud Generator. Our code reads from a collection of txt files(folder).
Accordingly a image cloud is generated in which the font size is proportional to the frequency of that particular word. Our image consists of top 'N' words, where 'N' is taken as input from the user.

⇨ Main problem we encountered during makin of this was "Which Data Structure will be more efficient for storing the word and its frequency ?" We had many options Hash Tables,Maps,Unordered Maps. We have used Unordered Maps. 

⇨ Here is the reason why we didn't use Map:

→ Map sorts its elements implicitly in lexicographical order which increases the time complexity of basic operations such as inseertion,deletion etc.also lexicographical sorting was not needed in our project.

⇨ While in Unordered Maps this sorting is not done implicitly. Hence We'd decided to go with Unordered Maps. Besides Unordered Maps we also used Vector which was used for sorting Words according to their frequency. 

### • INDIVIDUAL CONTRIBUTIONS :
#### ⇨ Shubham Ramoliya - 202301442 :   
→ Reading the files from folder.  
→ Tokenizing the words and converting capital     letters to small letters. (because "Panther" & "panther" will be treated as two different words if didn't converted explicitly)  

#### ⇨ Archan Maru - 202301217 :  
→ Created a function in which all the tokenized words will be stored in Unordered Map (word as key & frequency as value).  
→ Created a Sorting function which sorts the Elements according to their value(frequency).

#### ⇨ Ayush Chovatiya - 202301461 :      
→ Created a function which checks whether the word is unique or not , using file handling by accessing excluded_words.txt.  
→ Created a print function.  

#### ⇨ Rishabh Jalu - 202301265 :  
→ Created a List of excluded words. 
→ Created printing function and Give Idea About Generating Python Code.   
→ Added Comments and collected various sample txt files.  

### • NOTE :
→ Here, First you have to run C++ code. Then, a Python source file will be generated. Then, you will have to run the python code.  
→ The output will be a desent word-cloud image.  
