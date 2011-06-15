#include "CleanableCookieJar.h"
void CleanableCookieJar::clean_session_cookies(){
  QList<QNetworkCookie> cookies(allCookies());

  for(QList<QNetworkCookie>::iterator i = cookies.begin(); i != cookies.end(); i++)
    while(i->isSessionCookie())
      i = cookies.erase(i);

  setAllCookies(cookies);
}
CleanableCookieJar::~CleanableCookieJar(){}
CleanableCookieJar::CleanableCookieJar(QObject * parent): QNetworkCookieJar(parent){}
