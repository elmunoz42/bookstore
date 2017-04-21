## Description

Web App for bookstore with 4 different user authentication levels. It allows all users to see reviews, about page and locations. It allows authenticated users to see special promotions and it allows reviewer status users to post reviews and articles about books.

This website was generated with [Drupal 7.54](https://www.drupal.org/project/drupal/releases/7.54).

## Planning

|Status| Objective |
|------|-----------|
|DONE| Create 2 basic pages - an "About" page, and a "Locations" page.|
|DONE| Enable and configure the Contact module. Include a Contact form with a "Contact" link in the main menu. Make sure that anyone, regardless of their user role, can use the form to send you website feedback.|
|DONE|Install the Views module, the Features module and the Strongarm module, and all their dependencies. At your code review, to verify that you understand the Features workflow your teacher will look at your Git revision history to verify that your Features modules were each created, committed, modified and then committed again.|
|PARTIAL|Create a feature called "Site Configuration". Make the feature track the strongarm variables site_name, site_slogan, theme_default and site_frontpage (The URL for the page displayed as your frontpage). Generate the feature in your modules directory, then enable it in the Features management page and then commit the feature with your repository. ISSUE: site_slogan and site_frontpage don't seem to be available to select in this newer version of Strongarm/Drupal7.54.|
|PENDING PREVIOUS|Then change the site's default theme, name and slogan and configure the website so that the "About" page is the front page. Then recreate your Site Configuration feature and commit the changes.|
|DONE|Create a "Book Review" custom content type. The title field should be labelled "Book Title". It should also include fields for "Book Author", "Rating", and "Review Body". The "Book Title", "Book Author", "Rating", and "Review Body" fields should be required.The rating should be chosen with either a menu or radio buttons. The fields should be in the order "Book Title", "Book Author", "Rating", then "Review Body" when you fill out the form to add an instance of the book review content type.|
|DONE|Create a feature called "Book Review" for your new content type and then generate it in your modules directory. Then, don't forget to enable the feature in the Features management page and then commit it to your repository.|
|DONE|Create a view for the Book Review content type called "New Books". Don't bother creating a page for it, just create a block for it. The block should display the 3 newest book reviews as an unformatted list of linked titles, so that users can click on the title of a new book to go read the review of it. Don't use a pager.|
|DONE|Name the block and display it in an easily visible region. Add at least 4 book reviews to verify that it is working.|
|DONE|Add the "New Books" view to your "Book Review" feature and then recreate it, generating the files in your modules directory as usual, and then commit your changes.|
|DONE|Create a custom "Reviewer" role. The Reviewer role should have all the same permissions as an authenticated user, and also be able to create new book reviews. They should be able to edit and delete their own book reviews, but not anyone else's. Create an account for a user who is a Reviewer to test it out.|
|DONE|Create a special coupon to display as a block on the front page which is visible to authenticated users and not anonymous users. It should say something like "This week: use this coupon code to get 25% off on all Science Fiction!"|

## Setup
1. Clone repository from https://github.com/elmunoz42/bookstore.git
2. Set up connection to database system in MAMP (see bellow)
3. Import database from repo in phpMyAdmin (see bellow)
4. Create database admin in phpMyAdmin (see bellow)
5. Include settings.php with database access info

### Database connection
1. In MAMP > Preferences:
 - Apache Port: `8888`
 - MySQL Port: `8889`
 - Document root: **`<repo_pathname>`**
2. Click 'Start servers'

### Import database
* Visit **`localhost:8888/phpMyAdmin`** in browser
* Click 'Import' tab
 - Character set: utf-8
 - File: **`<repo_pathname>/sites/db-backup/<backup_filename>`**

### Create database admin
* Visit **`localhost:8888/phpMyAdmin`** in browser
* Click 'Privileges' tab for `bookstore`
* Add user
 - Name: `bookstore`
 - Password: `bookstore`
 - Host: local
 - All privileges for `bookstore`


## Technologies Used

* MySQL
* Drupal

## Known Bugs

_No known bugs._

## Support

_Please contact elmunoz42@gmail.com with questions or concerns._


### License

*MIT License*

Copyright (c) 2017 _**Carlos Muñoz Kampff**_
