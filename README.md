
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

Thank You.
