*** This is a pre-release - use at your own risk. ***


Views CSS Grid
------------------------

Backdrop CMS Module which provides the ability to put Views content in responsive columns and rows using CSS3 Grid layout.

INTRODUCTION
------------

Allow designers to create a grid content with or without adding their own CSS to a theme.

The module creates a new Views Format to display content in a CSS3 Grid.  
Options are:-

CSS Grid Fit - Works
CSS Grid Fill - Works
CSS Masonry - Not yet implemented

See https://css-tricks.com/auto-sizing-columns-css-grid-auto-fill-vs-auto-fit/ for information on using CSS Grid.


You can set the width of the content and the minimum height of the content to help create a more balanced grid.  
The content will automatically wrap based on the width of the region.  No need to use @media queries for different viewport widths.


For more information:

This module was inspired by these modules
 - Views B Grid - https://backdropcms.org/project/views_b_grid
 - Views Bootstrap - https://backdropcms.org/project/views_bootstrap


REQUIREMENTS
------------

Views UI


INSTALLATION
------------

Install this module using the official Backdrop CMS instructions at https://backdropcms.org/guide/modules


USAGE
-----

When editing a View, choose one of the following formats: -

 - CSS Grid Fill
 - CSS Grid Fit
 - CSS Gris Masonary

Settings: 

    Content width: Choose the width of the content

    Minimum row height: Choose the minimum row height

    Unit type for width and height: for the Unit of measure i.e.  px, em, ren, cm, mm, in, vh etc...

See https://www.w3schools.com/cssref/css_units.asp for all of the available options.

LICENSE
-------

This project is GPL v2 software. See the LICENSE.txt file in this directory for complete text.

CREDITS
-----------

 - views_b4_full by biolithic <https://github.com/biolithic>
 - Views B Grid by herbdool https://github.com/herbdool
 - Views Bootstrap https://github.com/backdrop-contrib/views_bootstrap

MAINTAINERS
-----------

 - albanycomputers <https://github.com/albanycomputers>
