TEMPLATE = app
TARGET = webkit_server
DESTDIR = .
HEADERS = WebPage.h Server.h Connection.h Command.h CleanableCookieJar.h Visit.h Find.h RemoveSessionCookies.h Reset.h Node.h JavascriptInvocation.h Url.h Source.h Evaluate.h Execute.h
SOURCES = main.cpp WebPage.cpp Server.cpp Connection.cpp Command.cpp CleanableCookieJar.cpp Visit.cpp Find.cpp RemoveSessionCookies.cpp Reset.cpp Node.cpp JavascriptInvocation.cpp Url.cpp Source.cpp Evaluate.cpp Execute.cpp
RESOURCES = webkit_server.qrc
QT += network webkit
CONFIG += console

