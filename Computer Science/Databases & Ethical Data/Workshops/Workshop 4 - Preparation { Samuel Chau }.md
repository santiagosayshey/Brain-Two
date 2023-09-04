## Question 1

```
You are asked to add SUPPLY in ER, which associates a SUPPLIER, a PROJECT, and a PART but to do it with SUPPLY as a **weak entity**, rather than as an association. Draw the ER diagram for this.

(Hint: Relationships connect entities, if SUPPLY is an entity, what does that men if we wish it to derive its key from SUPPLIER, PROJECT, and PART?)
```

![[Pasted image 20230905042222.png]]

## Question 2

```
Give an example, not from the notes, of a total participation constraint in a real-world system. What would the ER of this look like?
```

In a University's registration system, every `COURSE OFFERING` is an offering of a specific `COURSE`. This means, every time a course is offered (like "Introduction to Computer Science" in Fall 2023), it relates to a specific base course ("Introduction to Computer Science"). It's impossible for a course offering to exist without it being an offering of some course in the university's curriculum. Here, the `COURSE OFFERING` entity has a total participation constraint with the `COURSE` entity.

![[Pasted image 20230905044905.png]]

## Question 3 

```
From the examples given in lecture 7-3, we know that Dependants have Names, Birthdates, and Relationships. Two children in the company, who are not related, have the same names, birthdates, and relationships as each other. Explain, with a diagram if you prefer, why we would not be confused about which child is which, although neither has an ID or Staff number.
```
## Question 4 

```
What are the three schools of ethics we will be studying in this course?
```

## Question 5

```
There are seven principles of the GDPR and, while many are familiar, one is new. What is it and why is it in the GDPR?
```

## Question 6

```
How does the Australian Privacy Act (APA) look after the security of your personal information? Overall, what are the key differences between the GDPR and APA?
```