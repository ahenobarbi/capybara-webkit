capybara-webkit
===============

A [capybara](https://github.com/jnicklas/capybara) driver that uses [WebKit](http://webkit.org) via [QtWebKit](http://doc.qt.nokia.com/4.7/qtwebkit.html).

Dependencies
------------

capybara-webkit depends on a WebKit implementation from Qt, a cross-platform development toolkit. You'll need to download Qt to build and install the gem.

* [Download Qt](http://qt.nokia.com/downloads/downloads)

If you're on Ubuntu, you can install the libqt4-dev package. On Linux platforms, capybara-webkit requires an X server to run, although it doesn't create any visible windows.

Usage
-----

Add the capybara-webkit gem to your Gemfile:

    gem "capybara-webkit"

Set your Capybara Javascript driver to webkit:

    Capybara.javascript_driver = :webkit

Tag scenarios with @javascript to run them using a headless WebKit browser.

About
-----

The capybara WebKit driver was written by Joe Ferris, Tristan Dunn, and Jason Morrison from [thoughtbot, inc](http://thoughtbot.com/community).

![thoughtbot](http://thoughtbot.com/images/tm/logo.png)

The names and logos for thoughtbot are trademarks of thoughtbot, inc.

License
-------

capybara-webkit is Copyright © 2011 thoughtbot, inc. It is free software, and may be redistributed under the terms specified in the LICENSE file.

