#include "RemoveSessionCookies.h"
#include "CleanableCookieJar.h"
#include "WebPage.h"
#include<iostream>
#include<fstream>

RemoveSessionCookies::RemoveSessionCookies(WebPage *page, QObject *parent) : Command(page, parent) {
}

void RemoveSessionCookies::start(QStringList &arguments) {
  Q_UNUSED(arguments);
  QString response = "";

  page()->triggerAction(QWebPage::Stop);
  page()->mainFrame()->setHtml("<html><body></body></html>");

  QNetworkCookieJar jar(page()->networkAccessManager()->cookieJar());
  dynamic_cast<CleanableCookieJar*>(&jar)->clean_session_cookies();

  emit finished(true, response);
}
