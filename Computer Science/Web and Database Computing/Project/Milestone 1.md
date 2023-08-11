### Research

Think about and explore web pages & apps. What might a student club platform system look like? What information might users be required to supply? How will they log in? How will they interact with the system? How would club managers manage their clubs?  
You are encouraged to think about additional features for this application; we have outlined the minimum.

-   Research existing websites/apps to get ideas for your web application.
    -   Record any pages/services you find that are good examples of what your site could look like. What parts work well. What parts don’t work well?
    -   Also record any examples you find of features you might want to include in your site.

### Basic Design

Once you decide what a user will be able to do, then you need to think about how they will do each action and how you will make those actions visible on your site – keeping in mind the articles and lectures on design and usability.

-   Draw/Sketch (don’t code) a basic design for what your site will look like.
    -   It should be obvious from the drawing what each part of the site does.
    -   Be sure to include any dimensions for the layout of the site and its components:  
        -   Are components fixed in size or do they stretch?
        -   If the window is resized, how do elements change?
    -   How might the site look on a phone vs desktop?

-   Thinking about the features in the description section, start to plan how each of these features of your site will function, plus any additional features that you might like to have.  
    -   Where does this feature appear and how does the user interact with it?
    -   What happens when a user performs one of these interactions?
    -   If a change occurs to the page/site following an interaction, clarify what that will be and draw if necessary.Describe these for each feature.

Once you have a basic design, you now need to review and tweak it for usability and accessibility.

-   Review your design.
    -   How does it minimise kinematic and cognitive load?
    -   Does it meet the standards & heuristics referenced in lectures and on MyUni?
-   Have another group review your website design.
    -   Which parts of your site were clear. Which weren't?
    -   Record the feedback from the other group and any findings.
-   Record any updates to your design made as a result of the above review.

As you learn more about implementing web applications throughout this course, your design will likely change; that’s okay, but be sure that as those changes creep in, you continue to review your site for usability and accessibility. We will be assessing you for this in your final submission.

Your week 7 workshop time is a great opportunity to ask questions, get feedback, and compare your design with another group before the deadline.

### Building your Web App

Now that you have a solid design, it’s time to start coding it! You should now have a firm grasp on these languages and be able to implement ALL of the static elements of your website.

-   Use HTML and CSS to implement all of the parts of your site.
-   Follow best practices as outlined in lectures and exercises.
    -   Ensure CSS is used appropriately to provide a consistent and maintainable style across all your pages.
    -   Ensure your implementation passes validation.

As you build your website, begin to add interactive features using JavaScript and Vue.

-   Use JavaScript and Vue to further build your design.
-   Start to add client-side code for users / admins to interact with the system  
    -   Use test data/variables to simulate client-server interactions as needed and to help you test your code.
-   Follow best practices as outlined in lectures and exercises.
    -   Ensure JavaScript files are used appropriately to provide a consistent and maintainable code across all relevant pages.
    -   Ensure your implementation still passes validation after modifications.
    -   Ensure your JavaScript and Vue passes linting.

Do not worry about making user interactions persistent (i.e. user changes remain after a refresh) at this stage, but do begin to think and make notes about which interactions will need server resources.

# Planning your Routes and Database

Now that you have a solid design and basic client side implementation, you can start thinking about the content that your web application will be dealing with, and how.

-   For each of the features in your website, create a data plan that lists the different pieces of content/information that your web application will be dealing with & determine where it should be stored, what format, and where it should be processed.
    -   Where does the information come from?
    -   What form should it take?
    -   If the information is on the server, what will the client need to send to retrieve that data?
    -   If the information is on the client, how will it be sent to the server?
    -   Does all information need to be stored on the server?
    -   What processing needs to be done to make the data useful?

Once you have an idea of the different pieces of data that you'll need to be working with, you can start thinking about how you'll store that data on your server.

-   Using the methods outlined in lectures and pracs, create a Database Schema diagram for your web application's data.