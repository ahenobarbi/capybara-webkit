RemoveSessionCookies
#include "RemoveSessionCookies.h"
#include "WebPage.h"

RemoveSessionCookies::RemoveSessionCookies(WebPage *page, QObject *parent) : Command(page, parent) {
}

void RemoveSessionCookies::start(QStringList &arguments) {
  Q_UNUSED(arguments);

  page()->triggerAction(QWebPage::Stop);
  page()->mainFrame()->setHtml("<html><body></body></html>");

  QList<QNetworkCookie>& cookies(page()->networkAccessManager()->cookieJar()->allCookies());
  for(QList::iterator i = cookies.begin(); i != cookies.end(); i++)
    while(i->isSessionCookie())
      i = cookies.erase(i);

  QString response = "";
  emit finished(true, response);
}
