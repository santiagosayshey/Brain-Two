Initialize: 
StackNewestOnTop
StackOldestOnTop 

Function enqueue(element):                                                 // O(1)
    Push the new element onto StackNewestOnTop

Function dequeue():                                                        // O(n)
    If StackOldestOnTop is empty: {
         While StackNewestOnTop is not empty: {
			Pop an element from StackNewestOnTop
            Push this element onto StackOldestOnTop
        }   
    }
    Pop and return the top element from StackOldestOnTop
