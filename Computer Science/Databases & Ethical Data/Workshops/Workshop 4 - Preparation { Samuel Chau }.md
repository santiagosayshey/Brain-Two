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

Children are weak entities. They are totally dependant on a unique parent entity. In other words, there is total participation between a child and a parent. 

![[Pasted image 20230905045513.png]]


## Question 4 

```
What are the three schools of ethics we will be studying in this course?
```

1. **Duty-Based Ethics (Deontological Ethics)**:
- As you mentioned, this approach is focused on the inherent "rightness" or "wrongness" of actions, irrespective of their outcomes. Moral duties, principles, or rules determine the morality of actions. A classic example might be telling the truth: even if lying might result in a better outcome in a specific situation, a deontologist would argue that one has a duty to tell the truth.

2. **Consequence-Based Ethics (Consequentialism/Utilitarianism)**:
- This approach evaluates the morality of actions based on their results or consequences. The "right" action is the one that produces the most overall good or happiness, or reduces suffering. The most famous form of consequentialism is utilitarianism, which aims to maximize overall happiness or pleasure.

3. ??
## Question 5

```
There are seven principles of the GDPR and, while many are familiar, one is new. What is it and why is it in the GDPR?
```

- ***Accountability***

This principle requires data controllers to take responsibility for complying with the GDPR and to demonstrate that compliance. Prior regulations had many of the other principles, but the emphasis on accountability was an enhancement in the GDPR.

Why is it in the GDPR?

- **Proactive Compliance**: The accountability principle requires organizations to be proactive in ensuring compliance rather than merely reactive. It pushes organizations to put systems and processes in place to ensure and demonstrate compliance, rather than waiting for a breach to occur.
- **Transparency with Authorities**: Organizations may need to show evidence of compliance to supervisory authorities upon request, such as through documentation, the implementation of appropriate technical and organizational measures, or through other evidence like audits.
- **Protection for Individuals**: By pushing organizations to be more accountable, individuals' data is better protected. The principle means that organizations cannot just claim they are compliant; they must actively show and ensure that they are.
- **Risk Management**: Organizations are encouraged to consider risks and assess the appropriateness of the data protection measures they have in place, ensuring that these measures are continuously updated and improved upon.
## Question 6

```
How does the Australian Privacy Act (APA) look after the security of your personal information? Overall, what are the key differences between the GDPR and APA?
```

## APA Differences
- To whom it applies
- Notion of harm
- Fines and penalties
- Right to be forgotten (erasure) - doesn't really exist in the APA