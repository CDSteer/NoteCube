NoteCube
========

The main focus of the project is ambient notification, too many notifications we receive today are intrusive and distracting. They often take us off task or take us out of our environment to looking down at screens and requiring too much of our attention to interpret simple information.

NoteCube will give you power over your notifications, it will make notifications part of your life, not something demanding you away from it.

## Version 1.0 - Weather and Email

The current version will check if its raining in your city and if you have any email in your Gmail inbox.

## Installation

Code found in folder `spark/` needs to be flashed to your Spark Core.

Code found in `notifications/` are you be run on a computer with with python installed as well as the following:

You will need [Spyrk](https://github.com/Alidron/spyrk), just clone their repository and use the file in there.

For Spyrk to work will need [Hammock](https://pypi.python.org/pypi/hammock/0.2.3). Simply do `pip install hammock`.

If you intend to use the Gmail checker you will need [feedparser](https://pypi.python.org/pypi/feedparser).

In both `checkEmail.py` and `weather.py` you will need you replace `YOUR_ACCESS_TOKEN` with the access token of your Spark Core.

In `checkEmail.py` you will need add your own Gmail details.

In `weather.py` you will need add your own city.