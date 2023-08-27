Hey guys, with PTP being down for the forseeable future, I was wondering if anyone would be interested in me sharing my workflow to grab releases from other trackers by guesstimating which ones would be Golden Popcorns on PTP.

Essentially, it takes a predefined score and applies it to a release group, resolution, audio, etc and 'guesses' which release is most likely to be the golden popcorn on PTP. I've abstracted this process away - but basically it prioritises release groups over other qualities - and it chooses a release group via some data i've passed through an equation to give that release group a score. So, for any given resolution a release groups "Golden Popcorn Performance Index" or GPPI for short applies the heaviest weight in guessing if it's a golden popcorn or not. 

Using Radarr, I've compiled a whole bunch of custom formats, and given those formats a score to create a profile. It's pretty much the trash guides but on steroids. 

I haven't done any comprehensive testing with it since PTP has been down, but the eye test was pretty good and I found that it pretty accurately prioritised releases that were golden popcorns. The biggest obvious flaw - not finding GPs from one off user releases.

It might be a bit silly and some would say "just grab the release with the highest amount of seeders", but I often find that this isn't always the best choice - especially on other HD / movie trackers and some soon to be ones where PTP's huge catalogue will be uploaded elsewhere until it (hopefully) comes back. 

I'm also working on other profiles to guestimate some other categories - like streaming optimised, remuxes, etc. 

But yeah, I just wanted to guage if anyone would actually be interested in this before sharing it!